/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:33:09 by ldaniel           #+#    #+#             */
/*   Updated: 2024/04/15 18:33:01 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <ctime>
#include <cstring>
#include <climits>
#include <cctype>
#include <string>

class PmergeMe
{
    private:
        std::deque<int> _deque;
        std::vector<int> _vector;
    public:
        PmergeMe(/* args */);
        ~PmergeMe();
        void addIntegers(int ac, char **av);
        std::deque<int> get_deque();
        std::vector<int> get_vector();
        template<typename Container>
        void printContainer(const Container& container);
};

