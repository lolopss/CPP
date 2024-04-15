/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/18 14:55:51 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i = 1; i <= 5; ++i) {
        vec.push_back(i);
    }
    std::list<int> lst;
    for (int i = 6; i <= 10; ++i) {
        lst.push_back(i);
    }
    std::cout << "Searching for value 3 in vector: " << easyfind(vec, 3) << std::endl;
    std::cout << "Searching for value 8 in list: " << easyfind(lst, 8) << std::endl;
    std::cout << "Searching for value 10 in vector: " << easyfind(vec, 10) << std::endl;

    return 0;
}