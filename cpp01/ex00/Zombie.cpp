/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:00:58 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 13:13:47 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*----------------------------Construcors & destructors-------------------------------*/
Zombie::Zombie(std::string name) { this->name = name; }
Zombie::~Zombie() { std::cout << this->name << ": Dies" << std::endl; }

/*------------------------------------------------------------------------------------*/

void	Zombie::announce()
{ std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
