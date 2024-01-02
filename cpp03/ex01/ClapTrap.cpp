/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:49:04 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/02 16:31:59 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name){
	this->Name = name;
	std::cout << "ClapTrap " << name << "has been created\n";
}

void	ClapTrap::attack(const std::string &name){
	if (this->Energy > 0)
	{
		if (this->Health > 0)
			std::cout << "ClapTrap " << this->Name << " attacks " << name << " , causing " << this->Damage <<" points of damage!\n";
		else
			std::cout << "ClapTrap " << this->Name << "tries to attack" << name << ", but he is dead already.\n";
		this->Energy--;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy > 0)
	{
		while (this->Health < 10 && amount > 0){
			++this->Health;
			amount--;
		}
		if (this->Health > 1)
			std::cout << "ClapTrap " << this->Name << " repairs himself , healing " << amount <<" health point(s)! He now has " << this->Health << std::endl;
		else
			std::cout << "ClapTrap " << this->Name << "tries to repair himself, but he his already dead\n";
		this->Energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Health > 0){
		this->Health -= amount;
		std::cout << "Claptrap " << this->Name << " Got hit for " << amount <<". He now has " << this->Health << " health points" << std::endl;
		if (this->Health <= 0)
			std::cout << "Hey, Claptrap " << this->Name << " Died !\n";
	}
	else
		std::cout << "Hey, ClapTrap " << this->Name << " is already dead !\n";
}

ClapTrap::~ClapTrap()
{ std::cout << "ClapTrap " << this->Name << " has been destroyed\n"; }

