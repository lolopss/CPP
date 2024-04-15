/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:46:30 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/22 16:48:49 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        /* data */
        const std::string _name;
        bool _sign;
        const int _grade_sign;
        const int _grade_exec;
    public:
        Form();
        Form(std::string name, int exec, int sign);
        ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);
        std::string getName() const;
        int         getGradeSign() const;
        int         getExec() const;
        bool        getSign() const;
        void        beSigned(Bureaucrat &bureau);
        class GradeTooHighException: public std::exception{
            public:
                virtual const char *what() const throw(); 
        };
        class GradeTooLowException: public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

std::ostream & operator<<(std::ostream &n, Form const &i);
