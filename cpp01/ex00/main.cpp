/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:20:30 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 13:15:57 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zom1 = newZombie("Alex");

	zom1->announce();
	randomChump("Oui");
	delete zom1;
	return (0);
}
