/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:45:32 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/02 14:12:44 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

uintptr_t   Serializer::serialize(Data *ptr){
    if (!ptr)
        throw Serializer::NullPtrException();
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t seed){
    if (!seed)
        throw Serializer::NullPtrException();
    return (reinterpret_cast <Data*>(seed));
}

const char *Serializer::NullPtrException::what() const throw()
{ return "Data has been freed or is a NULL pointer."; }

