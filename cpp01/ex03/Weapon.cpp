/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:56:51 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 16:11:50 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) { Weapon::setType(name); }
Weapon::~Weapon() {}

/*-----------------------------set/getters-------------------------*/
void		Weapon::setType(std::string type) { this->_type = type; }
std::string Weapon::get_Type() { return (this->_type); }
/*-----------------------------------------------------------------*/

