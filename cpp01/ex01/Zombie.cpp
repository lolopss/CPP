/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:00:58 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 13:42:38 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*----------------------------Construcors & destructors-------------------------------*/
Zombie::Zombie() {}
Zombie::~Zombie() { std::cout << this->name << ": Dies" << std::endl; }

/*------------------------------------------------------------------------------------*/

void	Zombie::set_name(std::string name)
{ this->name = name; }

void	Zombie::announce()
{ std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
