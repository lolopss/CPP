/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:11:28 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/20 16:42:49 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : max_N(N){}

Span::~Span(){}

void Span::addNumber(int nb)
{
    if (this->list.size() >= this->max_N)
        throw std::out_of_range("List is full");
    this->list.push_back(nb);
}

unsigned int Span::longestSpan()
{
	if (this->list.size() < 2)
		throw std::out_of_range("List has one or less element");
	return *std::max_element(list.begin(), list.end()) - *std::min_element(list.begin(), list.end());
}

unsigned int Span::shortestSpan()
{
    if (this->list.size() < 2)
		throw std::out_of_range("List has one or less element");
    std::list<int> sortedList = list;
    sortedList.sort();
    unsigned int shortest = std::numeric_limits<unsigned int>::max();
    std::list<int>::iterator it = sortedList.begin();
    std::list<int>::iterator nextIt = it;
    ++nextIt;
    for (; nextIt != sortedList.end(); ++it, ++nextIt)
    {
        unsigned int diff = *nextIt - *it;
        if (diff < shortest)
            shortest = diff;
    }
    return (shortest);
}

void Span::addNumbers(const int* begin, const int* end) {
    if (list.size() + end - begin >= max_N)
        throw std::out_of_range("List is full");
    list.insert(list.end(), begin, end);
}