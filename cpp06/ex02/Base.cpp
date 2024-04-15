/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:18:29 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/04 14:33:50 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(){
    srand(static_cast<unsigned int>(time(0)));
    int random_nb = rand() % 3;
    
    switch(random_nb){
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
    }
    return (NULL);
}

void	getType(Base *base)
{
	if (dynamic_cast<A *>(base) != NULL)
		std::cout << "Base is A type\n" << std::endl;
	else if (dynamic_cast<B *>(base) != NULL)
		std::cout << "Base is B type\n" << std::endl;
	else if (dynamic_cast<C *>(base) != NULL)
		std::cout << "Base is C type\n" << std::endl;
	else
		std::cout << "Unknown type\n" << std::endl;
}

void    getType(Base &base){
	try {
		static_cast<void>(dynamic_cast<const A &>(base));
		std::cout << "Base is A type" << '\n';
		return ;
	}
	catch (std::exception &e){}
	try {
		static_cast<void>(dynamic_cast<const B &>(base));
		std::cout << "Base is B type" << '\n';
		return ;
	}
	catch (std::exception &e){}
	try {
		static_cast<void>(dynamic_cast<const C &>(base));
		std::cout << "Base is C type" << '\n';
		return ;
	}
	catch (std::exception &e){}
	std::cout << "Unknown type" << '\n';
}

Base::~Base()
{
}
