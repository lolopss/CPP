/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:51:25 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/01 15:41:47 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(){}
Convert::~Convert(){}

int Convert::getType(const std::string &input){
    int result;
    std::istringstream stream(input);
    if (input.length() == 1 && !std::isdigit(input[0]))
        return 1; // char
    else if (stream >> result)
    {
        if (input.find('.') != std::string::npos)
        {
            if (input[input.length() -1] == 'f')
                return 3; // floating number
            else
                return 4; // double
        }
        else
            return 2; // int
    }
    else
    {
        if (input == "nanf" || input == "+inff" || input == "-inff")
            return 3; // float
        else if (input == "nan" || input == "+inf" || input == "-inf")
            return 4; // double
        else
            return 0; // impossible
    }
}

void Convert::convert(const std::string &input)
{
    int type = Convert::getType(input);
    if (type == 0) // impossible
    {
        std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
    }
    else if (type == 1) // char
    {
        convertFromChar(input[0]);
    }
    else if (type == 2) // int
    {
        int result = std::atol(input.c_str());
        convertFromInt(result);
    }
    else if (type == 3) // float
    {
        float result = std::strtof(input.c_str(), NULL);
        convertFromFloat(result);
    }
    else // double
    {
        double result = std::strtod(input.c_str(), NULL);
        convertFromDouble(result);
    }
}

void    Convert::convertFromChar(char input){
    if (std::isprint(input))
        std::cout << "char: '" << input << "'" << std::endl; 
    else
        std::cout << "char: not printable" << std::endl;
    std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << static_cast<float>(input) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << ".0" << std::endl;
}

void    Convert::convertFromInt(int input){
    char c = static_cast<char>(input);
    if (input < CHAR_MIN || input > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (std::isnan(input) || std::isinf(input) || input > (float)INT_MAX || input < (float)INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast <int>(input) << std::endl;
    std::cout << "float: " << static_cast <float>(input) << "f" << std::endl;
    std::cout << "double: " << static_cast <double>(input) << std::endl;
}

void    Convert::convertFromDouble(double input){
    char c = static_cast <char>(input);
    if (input < CHAR_MIN || input > CHAR_MAX)
        std::cout << "char: impossible" << std::endl; 
    else if (std::isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else 
        std::cout << "char: Non displayable" << std::endl;
    if (std::isnan(input) || std::isinf(input) || input > INT_MAX || input < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast <int>(input) << std::endl;
    std::cout << "float: " << static_cast <float>(input) << "f" << std::endl;
    std::cout << "double: " << static_cast <double>(input) << std::endl;
}

void	Convert::convertFromFloat(float input){
	char c = static_cast <char>(input);
	if (input < CHAR_MIN || input > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (std::isnan(input) || std::isinf(input) || input > (float)INT_MAX || input < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << input << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;
}
