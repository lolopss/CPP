/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/12 13:51:54 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void printString(char &c)
// {
//         std::cout << c << ' '
// }

// void printInt(int i)
// {
// 	std::cout << i << ' ';
// }

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    int length = 5;

    iter(intArray, length, printElement<int>);
    std::cout << std::endl;
    
    std::string str = "Bonjour a tous";
    iter(str, str.length(), printElement<char>);
    std::cout << std::endl;
    return 0;
}
