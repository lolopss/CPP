/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:46:49 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 14:09:40 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_Brain;
	public:
		Dog();
		void	makeSound() const ;
		std::string	getType() const ;
		~Dog();
};
