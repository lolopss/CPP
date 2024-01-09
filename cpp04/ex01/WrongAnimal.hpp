/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:13:38 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 12:29:16 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	void makeSound()const;
	virtual std::string getType()const;
	~WrongAnimal();
};
