/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:20:30 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/16 13:37:08 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 10;
	Zombie *zb_hord = zombieHorde(N, "Jean");

	for(int i = 0; i < N; i++)
		zb_hord[i].announce();
	delete[] zb_hord;
	return (0);
}
