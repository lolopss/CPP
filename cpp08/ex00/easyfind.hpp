/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:43:25 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/18 14:50:14 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm> 
#include <iostream>
#include <string>
#include <vector>
#include <list>


template <class T> int easyfind(T container, int nbr)
{
	if (std::find(container.begin(), container.end(), nbr) != container.end())
	{
		std::cout << '\''<< nbr << "\' was found in the container." << '\n';
		return 0;
	}
	std::cout << "impossible to find \'" << nbr << "\' in the container." << '\n';
	return 1;
};