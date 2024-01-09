/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:11:33 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 13:04:09 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::string WrongCat::getType() const {
	return (_type);
}

void	WrongCat::makeSound() const {
	std::cout << _type << " : Mooo\n";
}

WrongCat::WrongCat()
{
	_type = "Wrong cat";
	std::cout << _type << " was created\n";
}

WrongCat::~WrongCat()
{
	std::cout << _type << " was destroyed\n";
}
