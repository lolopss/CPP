/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:46:34 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/19 16:08:50 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int exec, int sign): _sign(false), _name(name), _grade_exec(exec), _grade_sign(sign){
    if (this->_grade_sign < 1 || this->_grade_exec < 1)
        throw GradeTooHighException();
    if (this->_grade_sign > 150 || this->_grade_exec > 150)
        throw GradeTooLowException();
}

Form::~Form(){}

std::ostream &operator<<(std::ostream & o, const Form & i)
{
    return o << i.getName() << " form is " << (i.getSign() ? "signed " : "not signed ")\
        << "the grade required to sign it is at least " << i.getGradeSign()\
            << " and to execute is " << i.getExec() << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

void    Form::beSigned(Bureaucrat &bureau){
    if (bureau.getGrade() >= this->_grade_sign)
        throw GradeTooLowException();
    this->_sign = true;
}

std::string Form::getName() const
{ return this->_name; }
int Form::getGradeSign() const
{ return this->_grade_sign;}
int Form::getExec() const
{ return this->_grade_exec; }
bool Form::getSign() const
{ return this->_sign; }