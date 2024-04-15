/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:19:06 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/25 12:39:13 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::getMap() const {return this->map; }

double	ft_stod(std::string const &str) {
	std::string			data = str;
	std::stringstream	ss(data);
	double				ret;
	ss >> ret;
	return ret;
}

BitcoinExchange::BitcoinExchange() {
	std::ifstream file("data.csv");
	std::string line;
	std::size_t size;
	
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size = line.find(",");
		this->map[line.substr(0, size)] = ft_stod(line.substr(size + 1));
	}
}

bool	isOverflow(std::string const &str) {
	if (std::string::npos != str.find("."))
		return false;
	double	num = ft_stod(str);
	std::stringstream	stream;

	stream << num;
	std::string	converted;
	stream >> converted;
	return str.compare(converted);
}

double	BitcoinExchange::findValue(std::string const &date, double value)
{
	if (this->map[date])
		return (this->map[date] * value);
	std::map<std::string, double>::iterator it = this->map.upper_bound(date);
	it--;
	while (!it->second)
	{
		if (it == this->map.begin())
			return 0;
		it--;
	}
	return it->second * value;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) {*this = other;}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &other) {
	this->map = other.map;
	return *this;
}

void	bitExchange(std::string const &name)
{
	std::string line;
	std::ifstream file(name.c_str());
	BitcoinExchange converter;

	try {
		std::getline(file, line);
		while (std::getline(file, line))
		{
			std::size_t size = line.find (" | "); if (size == std::string::npos) {
				std::cout << "Error : bad input => " << line << '\n';
				continue ;
			}
			std::string date = line.substr(0, size);
			std::string value = line.substr(size + 3);
			if (!date.size() || !value.size()) {
				std::cout << "Error : bad input => " << line << '\n';
				continue ;
			}
				if (isOverflow(value)){
				std::cout << "Error: too large a number." << '\n';
				continue ;
			}
			double val = ft_stod(value);
			if (val < 0) {
				std::cout << "Error: not a positive number." << '\n';
				continue ;
			}
			std::cout << date << " => " << val << " = " << converter.findValue(date, val) << '\n';
		}
	}
	catch (std::exception &e) {std::cout << "ERROR CRITICAL : " << e.what() << '\n';}
}
