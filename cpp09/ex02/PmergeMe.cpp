/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:33:12 by ldaniel           #+#    #+#             */
/*   Updated: 2024/04/15 18:33:21 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}


void    PmergeMe::addIntegers(int ac, char **av){
    for (int i = 1; i < ac; ++i) {
        std::stringstream ss(av[i]);
        int num;
        ss >> num;
        if (!ss.fail() && ss.eof() && num >= 0) {
            _deque.push_back(num);
            _vector.push_back(num);
        }
    }
}

// Explicit instantiation of printContainer for std::deque<int>
template void PmergeMe::printContainer(const std::deque<int>& container);
// Explicit instantiation of printContainer for std::vector<int>
template void PmergeMe::printContainer(const std::vector<int>& container);

template<typename Container>
void PmergeMe::printContainer(const Container& container) {
    typename Container::const_iterator it;
    std::cout << "Container : ";
    for (it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

std::deque<int> PmergeMe::get_deque(){
    return this->_deque;
}
std::vector<int> PmergeMe::get_vector(){
    return this->_vector;
}
