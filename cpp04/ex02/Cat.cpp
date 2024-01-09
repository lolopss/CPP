/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:53:37 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 13:27:02 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::string Cat::getType() const {
	return (_type);
}

void	Cat::makeSound() const {
	std::cout << _type << " : Miaou\n";
}

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type << " was created\n";
	_Brain = new Brain();
}

Cat::~Cat()
{
	delete _Brain;
	std::cout << _type << " was destroyed\n";
}
