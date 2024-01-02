/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:00:27 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/21 14:33:10 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Surcharge de l'operateur d'affectation
Fixed &Fixed::operator=(const Fixed &other)
{
	// Verification pour eviter l'auto-affectation
	if (this != &other)
		this->_value = other._value; // en mettant l'argument en const, j'attribues directement la value de other. Donc pas de getrawbits print dans le terminal.
	return *this;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed::Fixed(){ this->_value = 0; std::cout << "Default constructor called\n";}
Fixed::Fixed(const Fixed &b){ this->_value = b._value; std::cout << "Copy assignment operator called\n"; } //constructeur de copie
Fixed::~Fixed(){ std::cout << "Destructor called\n"; }
