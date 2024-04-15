/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/03/16 14:12:17 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int> arr1;
    std::cout << "Array 1 size: " << arr1.size() << std::endl;
    Array<int> arr2(5);
    std::cout << "Array 2 size: " << arr2.size() << std::endl;
    arr2[0] = 1;
    arr2[1] = 2;
    arr2[2] = 3;
    arr2[3] = 4;
    arr2[4] = 5;

    Array<int> arr3 = arr2;
    arr3[0] = 10; // Modifying arr3 should not affect arr2
    std::cout << "arr2: " << arr2 << "\n";
    std::cout << "arr3: " << arr3 << "\n";

    Array<int> arr4;
    arr4 = arr2;
    arr4[1] = 20;

    // Test accessing elements out of bounds
    try {
        std::cout << "Trying to access an out-of-bounds element: " << arr2[6] << std::endl;
    } catch (const Array<int>::outOfBoundIndex& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Test output stream operator
    std::cout << "Array 2: " << arr2 << std::endl;
    return 0;
}