/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:38:12 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/27 16:41:43 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cmath>
#include <cstdlib>

class Convert
{
	private:
		Convert();		
	public:
		Convert(const Convert &copy);
		~Convert();
		Convert &operator=(const Convert &copy);
		static void convertFromChar(char input);
		static void convertFromInt(int input);
		static void convertFromFloat(float input);
		static void convertFromDouble(double input);
		static int getType(const std::string &input);
		static void convert(const std::string &input);
};
