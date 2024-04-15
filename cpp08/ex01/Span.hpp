/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:11:39 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/19 10:57:47 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <list>
#include <algorithm>
#include <stdexcept>
#include <cstdarg>

class Span
{
    private:
        std::list<int> list;
        unsigned int max_N;
        Span();
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span &other);
		Span    &operator=(const Span &other);
        
        void    addNumber(int nb);
        unsigned int     shortestSpan();
        unsigned int     longestSpan();
        void addNumbers(const int* begin, const int* end);
};


