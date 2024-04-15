/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:09:46 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/19 14:02:29 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <algorithm>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &other) {*this = other; };
		MutantStack &operator=(const MutantStack &other) {
			std::stack<T>::operator=(other);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
};
