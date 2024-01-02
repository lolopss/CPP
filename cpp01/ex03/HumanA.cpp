/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:27:41 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 16:47:14 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon){
	this->_name = name;
}

HumanA::~HumanA() {}

void	HumanA::attack()
{ std::cout << this->_name << " attacks with their " << this->_weapon.get_Type() << std::endl; }

