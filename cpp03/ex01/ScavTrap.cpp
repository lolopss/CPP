/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:33:50 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/03 12:36:14 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	_name = name;
	_health = 100;
	_energy = 50;
	_damage = 20;
	_type = "ScavTrap ";
	_guard = false;
	std::cout << _type << this->_name << " created" << std::endl;
}

void	ScavTrap::guardGate(){
	if (_guard == false)
	{
		std::cout << this->_type << this->_name << "is guarding the gate\n";
		_guard = true;
	}
	else
		std::cout << this->_type << this->_name << "is already guarding the gate\n";
}

ScavTrap::~ScavTrap() {
	std::cout << _type << _name << " has been destroyed" << std::endl;
}
