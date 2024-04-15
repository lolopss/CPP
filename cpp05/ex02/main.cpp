/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:19:25 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/22 16:49:37 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <unistd.h>

int main(int ac, char **av)
{
    try
    {
        Bureaucrat  buro1("Jean", 149);
        Bureaucrat  buro2("Paul", 5);
        ShrubberyCreationForm berry("Pavements");
        RobotomyRequestForm   robot("Robot");
        PresidentialPardonForm president("Trump");
        
        // Shruberry all cases
        // buro2.executeForm(berry);
        // buro2.signForm(berry);
        // buro1.executeForm(berry);
        // buro2.executeForm(berry);
        // 
        ///////////////////////////////////////
        //RobotomyRequestForm all cases
        // buro2.executeForm(robot);
        // buro2.signForm(robot);
        // buro1.executeForm(robot);
        // buro2.executeForm(robot);
        // usleep(500000); // for real 50% chance, cuz of time seed for srand
        
        //
        ///////////////////////////////////////
        //PresidentialPardon all cases
        // buro2.executeForm(president);
        // buro2.signForm(president);
        // buro1.executeForm(president);
        // buro2.executeForm(president);
        
        //
       /*
       */
        
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}