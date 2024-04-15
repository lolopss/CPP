/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:19:08 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/25 12:35:21 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange
{
private:
    std::map<std::string, double> map;
public:

    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    std::map<std::string, double> getMap() const;
    double	findValue(std::string const &date, double value);
};

void	bitExchange(std::string const &file);