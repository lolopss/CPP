/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:06 by mlangloi          #+#    #+#             */
/*   Updated: 2024/01/08 14:05:14 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include<iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};
