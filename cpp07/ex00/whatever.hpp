/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:14:22 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/11 13:53:48 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void swap(T &i, T &j){
    T tmp = i;

    i = j;
    j = tmp;
}

template <typename T> T min(T i, T j){
    return (i < j ? i : j);
}

template <typename T> T max(T i, T j){
    return (i > j ? i : j);
}