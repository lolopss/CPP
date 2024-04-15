/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/25 12:40:17 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error \nArgument count is wrong." << '\n';
		return 1;
	}
	std::ifstream f("data.csv"); if (!f.is_open()) {
		std::cerr << "Unable to open data.csv file." << '\n';
		return 1;
	}
	std::ifstream file(argv[1]) ; if (!file.is_open()) {
		std::cerr << "Unable to open " << argv[1] << std::endl;
		return 1;
	}
	bitExchange(argv[1]);
	return 0;
}