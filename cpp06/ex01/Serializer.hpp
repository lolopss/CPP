/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:45:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/01 15:47:35 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"

#include <iostream>
#include <stdint.h>
#include <string>
#include <vector>

class Serializer
{
    private:
        Serializer(const Serializer &other);
	Serializer();
    public:
        ~Serializer();
		Serializer	&operator=(const Serializer &other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t seed);
        class NullPtrException: public std::exception{
            public:
                virtual const char *what() const throw(); 
        };
};
