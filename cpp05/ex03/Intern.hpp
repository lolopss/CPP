/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:51:26 by ldaniel           #+#    #+#             */
/*   Updated: 2024/02/26 11:54:27 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern
{
    private:
        /* data */
    public:
        Intern();
        ~Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        Intern(Intern&& other) noexcept;
        Intern& operator=(Intern&& other) noexcept;
        AForm* makeForm(const std::string &form_name, const std::string &target);
        class WrongFormException : public std::exception
        {
        public:
            const char* what() const throw();
        };
};

		