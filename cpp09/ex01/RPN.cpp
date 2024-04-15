/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:06:17 by ldaniel           #+#    #+#             */
/*   Updated: 2024/04/09 14:32:24 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}
RPN::~RPN(){}

void    RPN::calculate(char sign){
    if (_stack.size() < 2)
        throw std::runtime_error("Not enough numbers in the stack to calculate");
    int b = _stack.top();
    _stack.pop();
    int a = _stack.top();
    _stack.pop();
    switch (sign)
    {
        case '+' :
            _stack.push(a + b);
            break ;
        case '-' :
            _stack.push(a - b);
            break ;
        case '*' :
            _stack.push(a * b);
            break ;
        case '/' :
            if (b == 0)
            {
                std::cout << "division by 0 impossible\n";
                throw std::runtime_error("Division by zero is not allowed");
            }
            _stack.push(a / b);
            break ;
        default :
            throw std::runtime_error("Invalid operator encountered");
    }
}

void     RPN::push_stack(int &i, char *str){
    while (isdigit(str[i])){
        _stack.push(str[i] - '0');
        i += 1;
    }
}

void    RPN::calculator(char *str){
    for (int i = 0; str[i]; i++)
    {
        if (isdigit(str[i]))
            push_stack(i, str);
        else if ((str[i] == '/' || str[i] == '*' || str[i] == '-' || str[i] == '+'))
            calculate(str[i]);
    }
    if (_stack.size() == 1)
        std::cout << _stack.top() << std::endl;
    else
        throw std::runtime_error("More than 1 element in stack at the end of the program");
}