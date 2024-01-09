/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:25:40 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 14:15:32 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	const Animal *ani[4];
	for (int i = 0; i < 2; i++)
		ani[i] = new Dog();
	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		ani[i] = new Cat();
	for (int i = 0; i < 4; i++)
		delete ani[i];
	return 0;
}
