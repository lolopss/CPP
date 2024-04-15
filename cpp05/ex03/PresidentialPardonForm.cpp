/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:46:35 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/22 16:45:05 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 5, 25)
{
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > this->getExec())
        throw GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}