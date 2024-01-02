/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:00:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/02 10:39:56 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int _value;
		const static int _bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &b);
		~Fixed();
		Fixed &operator=(const Fixed &other); // surcharge de l'operateur d'affectation
		int getRawBits() const;
		void setRawBits(int const raw);
};
