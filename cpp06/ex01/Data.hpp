/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:17:26 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/02 13:23:51 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Data {
public:
    // Constructors
    Data();
    Data(const Data& other);
    Data& operator=(const Data& other);
    ~Data();
    int age;
    char gender;
};