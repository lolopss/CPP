/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:25:40 by ldaniel           #+#    #+#             */
/*   Updated: 2024/01/08 14:19:37 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

	int main()
{
	//AAnimal *anim = new AAnimal(); //Ne compiles pas car classe virtuelle pure, donc non instanciable.
	const AAnimal *ani[4];
	for (int i = 0; i < 2; i++)
		ani[i] = new Dog();
	std::cout << std::endl;
	for (int i = 2; i < 4; i++)
		ani[i] = new Cat();
	for (int i = 0; i < 4; i++)
		delete ani[i];
	return 0;
}

