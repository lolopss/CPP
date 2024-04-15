/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:19:25 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/26 11:52:01 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <unistd.h>

int main()
{
    srand(time(NULL));

    Bureaucrat bob("Bob", 5);
    Bureaucrat joe("Joe", 45);
    Bureaucrat jill("Jill", 137);

    std::cout << bob << std::endl;
    std::cout << joe << std::endl;
    std::cout << jill << std::endl;

    Intern intern;

    AForm* form1;
    AForm* form2;
    AForm* form3;
    AForm* formfalse;

    try
    {
        form1 = intern.makeForm("shrubbery creation", "Roof");
        form2 = intern.makeForm("robotomy request", "Robot");
        form3 = intern.makeForm("presidential pardon", "Trump");
        formfalse = intern.makeForm("test", "test");        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    bob.executeForm(*form1);
    joe.executeForm(*form1);
    jill.executeForm(*form1);
    std::cout << std::endl;
    bob.signForm(*form1);
    joe.signForm(*form1);
    jill.signForm(*form1);
    std::cout << std::endl;
    bob.executeForm(*form1);
    joe.executeForm(*form1);
    jill.executeForm(*form1);
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    bob.executeForm(*form2);
    joe.executeForm(*form2);
    jill.executeForm(*form2);
    std::cout << std::endl;
    bob.signForm(*form2);
    joe.signForm(*form2);
    jill.signForm(*form2);
    std::cout << std::endl;
    bob.executeForm(*form2);
    joe.executeForm(*form2);
    jill.executeForm(*form2);
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    bob.executeForm(*form3);
    joe.executeForm(*form3);
    jill.executeForm(*form3);
    std::cout << std::endl;
    bob.signForm(*form3);
    joe.signForm(*form3);
    jill.signForm(*form3);
    std::cout << std::endl;
    bob.executeForm(*form3);
    joe.executeForm(*form3);
    jill.executeForm(*form3);
}