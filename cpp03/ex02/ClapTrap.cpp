/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:49:04 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/03 12:17:44 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << _type << "has been created\n";
}

ClapTrap::ClapTrap(const std::string &name){
	this->_name = name;
	std::cout << _type << name << " has been created\n";
}

void	ClapTrap::attack(const std::string &name){
	if (this->_energy > 0)
	{
		if (this->_health > 0)
			std::cout << this->_type << this->_name << " attacks " << name << " , causing " << this->_damage <<" points of damage!\n";
		else
			std::cout << this->_type << this->_name << " tries to attack " << name << ", but he is dead already.\n";
		this->_energy--;
	}
	else
		std::cout << this->_type << this->_name << "has no energy left\n";
	sleep(1);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		while (this->_health < 10 && amount > 0){
			++this->_health;
			amount--;
		}
		if (this->_health > 1)
			std::cout << this->_type << this->_name << " repairs himself , healing " << amount <<" health point(s)! He now has " << this->_health << std::endl;
		else
			std::cout << this->_type << this->_name << "tries to repair himself, but he his already dead\n";
		this->_energy--;
	}
	else
		std::cout << this->_type << this->_name << "has no energy left\n";
	sleep(1);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health > 0){
		this->_health -= amount;
		std::cout << this->_type << this->_name << " Got hit for " << amount <<". He now has " << this->_health << " health points" << std::endl;
		if (this->_health <= 0)
			std::cout << "Hey, " << this->_type << this->_name << " Died !\n";
	}
	else
		std::cout << "Hey, " << this->_type << this->_name << " is already dead !\n";
	sleep(1);
}

ClapTrap::~ClapTrap()
{ std::cout << "ClapTrap " << _name << " has been destroyed\n"; }
