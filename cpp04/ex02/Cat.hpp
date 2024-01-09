/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:46:19 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 14:09:36 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_Brain;
	public:
		Cat();
		void	makeSound() const;
		std::string	getType() const;
		~Cat();
};
