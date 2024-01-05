/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:06 by mlangloi          #+#    #+#             */
/*   Updated: 2024/01/05 17:31:53 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		~Animal();
		virtual void makeSound()const;
		virtual std::string getType()const;


};
