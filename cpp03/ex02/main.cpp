/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:00:02 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/03 12:16:41 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	ClapTrap("4trap");
	ScavTrap	ScavTrap("Blyat");

	ScavTrap.attack("Handsome Jack");
	ClapTrap.attack("Maxime");
	ScavTrap.takeDamage(50);
	ClapTrap.takeDamage(5);
	ScavTrap.beRepaired(2);
	ClapTrap.beRepaired(2);
	ScavTrap.takeDamage(8);
	ClapTrap.takeDamage(8);
	ScavTrap.beRepaired(1);
	return (0);
}
