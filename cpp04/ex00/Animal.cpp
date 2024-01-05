/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:02 by mlangloi          #+#    #+#             */
/*   Updated: 2024/01/05 17:31:18 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Animal::Animal()
{
	std::cout << "Animal est cree" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal a ete detruit" << std::endl;
}

void Animal::makeSound()const
{
	std::cout << _type << " : [son de l'animal]" << std::endl;
}

std::string Animal::getType()const
{
	return (_type);
}
