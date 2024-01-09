/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:02 by mlangloi          #+#    #+#             */
/*   Updated: 2024/01/08 14:18:40 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal was created" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal was destroyed" << std::endl;
}

void AAnimal::makeSound()const
{
	std::cout << _type << " : [AAnimal sound]" << std::endl;
}

std::string AAnimal::getType()const
{
	return (_type);
}
