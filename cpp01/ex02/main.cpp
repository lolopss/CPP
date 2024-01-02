/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:46:57 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 14:28:32 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "---------------mem addr---------------------\n";
	std::cout << "mem adress of string :		" << &str << std::endl;
	std::cout << "mem adress of stringPTR:	" << stringPTR << std::endl;
	std::cout << "mem adress of stringREF:	" << &stringREF << std::endl;
	std::cout << "\n-------------values-------------------------\n";
	std::cout << "value of string :	" << str << std::endl;
	std::cout << "value of stringPTR :	" << *stringPTR << std::endl;
	std::cout << "value of stringREF :	" << stringREF << std::endl;
	return (0);
}
