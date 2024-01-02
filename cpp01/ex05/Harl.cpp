/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:37:56 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/18 17:30:13 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void	Harl::debug()
{ std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do\n"; }

void	Harl::info()
{ std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"; }

void	Harl::warning()
{ std::cout <<"[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"; }

void	Harl::error()
{ std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n"; }

void	Harl::complain(std::string level)
{
	std::string msg[4] = { "debug", "info", "warning", "error" };
	void(Harl::*ft[4])() = { &Harl::debug,  &Harl::info, &Harl::warning, &Harl::error };
	for (int i= 0; i < 4; i++)
	{
		if (msg[i] == level)
			(this->*ft[i])();
	}
		std::cout << std::endl;
}
