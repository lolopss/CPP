/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:19:25 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/20 15:21:31 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int ac, char **av)
{
    try
    {
        Bureaucrat  buro1("Jean", 149);
        Bureaucrat  buro2("Paul", 1);

        buro1.decrement();
        buro1.increment();

        buro2.decrement();
        buro2.increment();
        buro2.increment();
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}