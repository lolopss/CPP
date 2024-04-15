/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:20:41 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/20 15:23:09 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

std::ostream &operator<<(std::ostream & o, Bureaucrat const & i){ return o << i.getName() << ", bureaucrat grade " << i.getGrade(); }

std::string Bureaucrat::getName() const { return this->_name; }
int Bureaucrat::getGrade() const { return this->_grade; }

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}


void Bureaucrat::decrement(){
    if (this->_grade + 1 > 150)
        throw GradeTooLowException();
    this->_grade++;
    std::cout << this->_name << " has been demoted from grade " << this->_grade - 1 << " to grade " << this->_grade << std::endl;
}

void Bureaucrat::increment(){
    if (this->_grade - 1 < 1)
        throw GradeTooHighException();
    this->_grade--;
    std::cout << this->_name << " has been promoted from grade " << this->_grade + 1 << " to grade " << this->_grade << std::endl;
}

void    Bureaucrat::signForm(AForm &form){
    try{
        
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << "\n";
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because : " << e.what() << ".\n";
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const&){}

Bureaucrat::Bureaucrat(std::string str, int grade): _name(str), _grade(grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
}
Bureaucrat::~Bureaucrat()
{}



void    Bureaucrat::executeForm(AForm const &form){
    try
    {
        if (form.getSign() == false)
            throw (AForm::NotSignedException());
        form.execute(*this);
        std::cout << form.getName() << " executed" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << form.getName() << ": Error\n" << e.what() << '\n';
    }
}