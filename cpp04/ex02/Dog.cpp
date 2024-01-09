/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:54:06 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 13:25:49 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type << " was created\n";
	_Brain = new Brain();
}

void	Dog::makeSound() const {
	std::cout << _type << " : Woof\n";
}

std::string Dog::getType() const {
	return (_type);
}

Dog::~Dog()
{
	delete _Brain;
	std::cout << _type << " was destroyed\n";
}
