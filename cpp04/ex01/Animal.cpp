/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:02 by mlangloi          #+#    #+#             */
/*   Updated: 2024/01/08 12:31:07 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Animal::Animal()
{
	std::cout << "Animal was created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal was destroyed" << std::endl;
}

void Animal::makeSound()const
{
	std::cout << _type << " : [Animal sound]" << std::endl;
}

std::string Animal::getType()const
{
	return (_type);
}
