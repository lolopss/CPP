/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:17:41 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/11 14:57:27 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename U, typename V>
void iter(T array, U length, V func) {
    for (U i = 0; i < length; i++)
        func(array[i]);
}

template <typename T>
void printElement(T &element)
{
    std::cout << element << " ";
}
