/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:31:56 by ldaniel           #+#    #+#             */
/*   Updated: 2024/04/18 13:52:33 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isOverflow(const char* str) {
    std::stringstream ss(str);
    int num;
    ss >> num;
    if (ss.fail() || !ss.eof()) {
        std::cout << str << " is not a valid integer\n";
        return true;
    }
    if (num < 0)
    {
        std::cout << num << " is a negative integer\n";
        return (true);
    }
    return false; 
}

bool check_args(int ac, char **av){
    if (ac <= 1)
    {
        std::cout << "You need to put a list of integer\n";
        return false;
    }
    for (int i = 1; i < ac; i++){
        for (int j = 0; av[i][j]; j++){
            if (std::isdigit(av[i][j] == 0)){
                std::cout << "You can only put digits\n";
                return false;
            }
        }
        if (isOverflow(av[i]))
            return false;
    }
    return true;
}

int main(int ac, char **av){
    if (check_args(ac, av) == false){
        return (1);
    }
    PmergeMe    merge;
    merge.addIntegers(ac, av);
    merge.printContainer(merge.get_deque());
    merge.sortDeque();
    merge.sortVector();
    merge.printContainer(merge.get_deque());
    
    //sort(ac, av);
    return (0);
}