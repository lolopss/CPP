/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:00:02 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/02 16:32:14 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	ClapTrap("CL4P-TP");

	ClapTrap.attack("Handsome Jack");
	sleep(1);
	ClapTrap.takeDamage(5);
	sleep(1);
	ClapTrap.beRepaired(2);
	sleep(1);
	ClapTrap.takeDamage(8);
	sleep(1);
	ClapTrap.beRepaired(1);
	return (0);
}
