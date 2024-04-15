/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:19:25 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/02 13:42:24 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(int ac, char **av)
{
    try
    {
        Bureaucrat  buro1("Jean", 149);
        Bureaucrat  buro2("Paul", 16);
        Form        form1("form1", 15, 20);

        std::cout << form1;
        buro2.signForm(form1);
        buro1.signForm(form1);
        std::cout << form1;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}