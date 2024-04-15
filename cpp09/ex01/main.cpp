/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:20 by ldaniel           #+#    #+#             */
/*   Updated: 2024/04/09 14:29:08 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int check;

int is_valid_char(char av, int i) {
    if (i % 2 == 0 && !std::isdigit(av) && (av != '/' && av != '*' && av != '-' && av != '+')) {
        std::cout << "Error: Arguments can only be 0~9 numbers or '/' '*' '+' '-' separated by spaces\n";
        check = 3;
        return 3;
    } else if (i % 2 && av != ' ') {
        std::cout << "Error: Arguments can only be 0~9 numbers or '/' '*' '+' '-' separated by spaces\n";
        check = 4;
        return 4;
    }
    return 0;
}

void check_args(int ac, char **av) {
    if (ac < 2) {
        std::cout << "Error: Wrong number of arguments\n";
        check = 1;
        return;
    }
    for (int i = 0; av[1][i] && check == 0; i++) {
        if (is_valid_char(av[1][i], i)) {
            return;
        }
    }
}

int main(int ac, char **av)
{
    check_args(ac, av);
    if (check != 0) {
		return (-1);
    }
	RPN rpn;
    try
    {
        rpn.calculator(av[1]);
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}

// c = 0123456789+-/*
// "c c c c"

// pile = s
// [1][7][8]
// f() int a = pop()
// [1][15][]