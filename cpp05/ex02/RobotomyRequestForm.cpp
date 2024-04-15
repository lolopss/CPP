/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:38:05 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/20 17:00:11 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
	
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 137, 145)
{
   this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > this->getExec())
        throw GradeTooLowException();
    srand(time(0));
    if (rand() % 2 == 0)
        std::cout << "BZZZZzzzt BOUM Clang CLang : " << this->_target << " has been robotomized\n";
    else
        std::cout << "BZZZZzzzt BOUM Clang CLang : " << this->_target << " robotomy failed\n";
}
