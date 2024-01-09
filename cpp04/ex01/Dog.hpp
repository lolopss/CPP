/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:46:49 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 13:30:00 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*_Brain;
	public:
		Dog();
		void	makeSound() const ;
		std::string	getType() const ;
		~Dog();
};
