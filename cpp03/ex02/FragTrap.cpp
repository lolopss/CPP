/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:06:05 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/03 15:21:19 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap() {
	_name = name;
	_health = 100;
	_energy = 100;
	_damage = 30;
	_type = "FragTrap ";
	std::cout << _type << this->_name << " created" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << this->_type << this->_name << "puts it's hands up for some high fives !\n";
}

FragTrap::~FragTrap() {
	std::cout << _type << _name << " has been destroyed" << std::endl;
}
