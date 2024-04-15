/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:19:36 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/22 16:49:01 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>    
#include <exception>
	

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
        
    public:
        Bureaucrat(std::string str, int grade);
        Bureaucrat(const Bureaucrat &);
		Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
        std::string getName() const;
        int     getGrade() const;
        void    increment();
        void    decrement();
        class GradeTooHighException: public std::exception{
            public:
                virtual const char *what() const throw(); 
        };
        class GradeTooLowException: public std::exception{
            public:
                virtual const char *what() const throw();
        };
};

std::ostream & operator<<(std::ostream &n, Bureaucrat const &i);



