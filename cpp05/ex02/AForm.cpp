/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:46:34 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/19 16:08:50 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int exec, int sign): _sign(false), _name(name), _grade_exec(exec), _grade_sign(sign){
    if (this->_grade_sign < 1 || this->_grade_exec < 1)
        throw GradeTooHighException();
    if (this->_grade_sign > 150 || this->_grade_exec > 150)
        throw GradeTooLowException();
}

AForm::~AForm(){}

std::ostream &operator<<(std::ostream & o, const AForm & i)
{
    return o << i.getName() << " form is " << (i.getSign() ? "signed " : "not signed ")\
        << "the grade required to sign it is at least " << i.getGradeSign()\
            << " and to execute is " << i.getExec() << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char *AForm::NotSignedException::what() const throw()
{
    return "Form is not signed!";
}

void    AForm::beSigned(Bureaucrat &bureau){
    if (bureau.getGrade() >= this->_grade_sign)
        throw GradeTooLowException();
    this->_sign = true;
}

std::string AForm::getName() const
{ return this->_name; }
int AForm::getGradeSign() const
{ return this->_grade_sign;}
int AForm::getExec() const
{ return this->_grade_exec; }
bool AForm::getSign() const
{ return this->_sign; }