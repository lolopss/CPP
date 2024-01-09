/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:04:31 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 12:31:24 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong animal was created\n" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal was destroyed\n" << std::endl;
}

void WrongAnimal::makeSound()const
{
	std::cout << _type << " : [Wrong animal sound]\n" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return (_type);
}
