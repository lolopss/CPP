/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:00:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 16:57:27 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		const static int _bits = 8;
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &nb);
		Fixed &operator=(const Fixed &other); // surcharge de l'operateur d'affectation
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);

		float toFloat() const;
		int toInt() const;

		bool operator>(const Fixed &nbr)const;
		bool operator<(const Fixed &nbr)const;
		bool operator>=(const Fixed &nbr)const;
		bool operator<=(const Fixed &nbr)const;
		bool operator==(const Fixed &nbr)const;
		bool operator!=(const Fixed &nbr)const;
		Fixed operator+(const Fixed &nbr)const;
		Fixed operator-(const Fixed &nbr)const;
		Fixed operator*(const Fixed &nbr)const;
		Fixed operator/(const Fixed &nbr)const;
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream &n, Fixed const &i);
