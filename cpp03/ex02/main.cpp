/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:00:02 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/03 15:20:45 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap	ClapTrap("4trap");
	ScavTrap	ScavTrap("Blyat");
	FragTrap	FragTrap("Boum");

	FragTrap.attack("Oui");
	ScavTrap.attack("Handsome Jack");
	ClapTrap.attack("Maxime");
	FragTrap.takeDamage(50);
	ScavTrap.takeDamage(50);
	ClapTrap.takeDamage(5);
	FragTrap.beRepaired(2);
	ScavTrap.beRepaired(2);
	ClapTrap.beRepaired(2);
	ScavTrap.takeDamage(8);
	ClapTrap.takeDamage(8);
	ScavTrap.beRepaired(1);
	return (0);
}
