/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:00:27 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/02 14:31:00 by ldaniel          ###   ########.fr       */
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
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed::Fixed() {
	this->_value = 0; this->_bits;
// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &nb) //constructeur de copie
{
	this->_value = nb._value;
	// std::cout << "Copy assignment operator called\n";
}

Fixed::Fixed(const int nb): _value(nb << _bits){
	// std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed(const float nb): _value(roundf(nb * (1 << _bits)))
{
//	std::cout << "Float constructor called" << std::endl;
}

int	Fixed::toInt() const
{
	return (this->_value >> this->_bits);
}

float Fixed::toFloat() const
{
	float nb = static_cast<float>(this->getRawBits()) / (1 << _bits);
	return (nb);
}

Fixed::~Fixed(){
	//std::cout << "Destructor called\n";
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}


bool Fixed::operator>(const Fixed &nbr)const
{
	return (this->getRawBits() > nbr.getRawBits());
}

bool Fixed::operator<(const Fixed &nbr)const
{
	return (this->getRawBits() < nbr.getRawBits());
}

bool Fixed::operator>=(const Fixed &nbr)const
{
	return (this->getRawBits() >= nbr.getRawBits());
}

bool Fixed::operator<=(const Fixed &nbr)const
{
	return (this->getRawBits() >= nbr.getRawBits());
}

bool Fixed::operator==(const Fixed &nbr)const
{
	return (this->getRawBits() == nbr.getRawBits());
}

bool Fixed::operator!=(const Fixed &nbr)const
{
	return (this->getRawBits() != nbr.getRawBits());
}

Fixed Fixed::operator+(const Fixed &nbr)const
{
	return (this->toFloat() + nbr.toFloat());
}

Fixed Fixed::operator-(const Fixed &nbr)const
{
	return (this->toFloat() - nbr.toFloat());
}

Fixed Fixed::operator*(const Fixed &nbr)const
{
	return (this->toFloat() * nbr.toFloat());
}

Fixed Fixed::operator/(const Fixed &nbr)const
{
	return (this->toFloat() / nbr.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++this->_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._value = this->_value++;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	--this->_value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._value = this->_value--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
