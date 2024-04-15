/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 07:46:03 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/16 14:16:20 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : _array(new T[0]), _size(0) {};
		Array(unsigned int n) : _array(new T[n]), _size(n) {};
		~Array() { if (_array != NULL) { delete[] _array; } };
		Array(Array const &previous) : _array(new T[previous.size()]), _size(previous._size){
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = previous._array[i];
		};
		class outOfBoundIndex : public std::exception
		{
			public :
				virtual const char *what() const throw () { return "Index out of bounds"; };
		};
		Array& operator=(const Array& other) {
			if (this != &other) {
				if (_array != NULL)
					delete[] _array;
				_size = other._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; ++i) {
					_array[i] = other._array[i];
				}
			}
			return *this;
		}
		T& operator[](unsigned int i) const{
			if (i >= this->_size)
				throw Array::outOfBoundIndex();
			return this->_array[i];
		};
		unsigned int size(void) const { return this->_size; };
};

template<typename T>
std::ostream &operator<<(std::ostream &o, Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		o << array[i] << " ";
	return o;
} 