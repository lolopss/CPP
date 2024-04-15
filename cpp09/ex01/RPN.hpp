/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:20:52 by ldaniel           #+#    #+#             */
/*   Updated: 2024/04/09 14:01:55 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <stack>


class RPN
{
    private:
        std::stack<int> _stack;
    public:
        RPN(/* args */);
        ~RPN();
        RPN(const RPN &other);
        RPN &operator =(const RPN &other);
        void     push_stack(int &i, char *str);
        void    calculate(char sign);
        void    calculator(char *str);
};
