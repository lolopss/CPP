/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/02 14:16:53 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    try{
        Data	*ptr = new Data;
        uintptr_t	seed;

        ptr->age = 15;
        seed = Serializer::serialize(ptr);
        Data	*newPtr = new Data;
        newPtr = Serializer::deserialize(seed);
        
        std::cout << "Ptr age: " << ptr->age << " newPtr age: " << newPtr->age << std::endl;
        delete ptr;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}