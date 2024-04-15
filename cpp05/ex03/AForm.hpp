/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:46:30 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/19 15:43:12 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    private:
        /* data */
        const std::string _name;
        bool _sign;
        const int _grade_sign;
        const int _grade_exec;
        AForm();
    public:
        AForm(std::string name, int exec, int sign);
        ~AForm();
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
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
        class NotSignedException: public std::exception{
            public:
                virtual const char *what() const throw();
        };
        virtual void execute(Bureaucrat const &executor) const = 0;
        
};

std::ostream & operator<<(std::ostream &n, AForm const &i);
