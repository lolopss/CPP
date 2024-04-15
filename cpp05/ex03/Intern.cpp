/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:50:39 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/26 11:43:08 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

const char* Intern::WrongFormException::what() const throw(){
	return ("invalid form type");
}
        
AForm   *Intern::makeForm(const std::string &form_name, const std::string &target){
    std::string tab[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    int i = 0;
    while (i < 3 && tab[i] != form_name)
		i++;
	AForm* tmp = NULL;
	switch (i)
	{
		case 0:
			tmp = new ShrubberyCreationForm(target);
			break;
		case 1:
			tmp = new RobotomyRequestForm(target);
			break;
		case 2:
			tmp = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::WrongFormException();
	}
	std::cout << "Intern creates " << form_name << std::endl;
	return tmp;
}