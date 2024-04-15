/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:06:03 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/03 14:11:18 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &b);
		FragTrap &operator=(const FragTrap &other); // surcharge de l'operateur d'affectation
		void	highFivesGuys(void);
		~FragTrap();
};
