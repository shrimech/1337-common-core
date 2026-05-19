/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 02:09:09 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 02:21:37 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string A = "HI THIS IS BRAIN";
    std::string *stringPTR = &A;
    std::string &stringREF = A;

    std::cout << &A << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << A << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    
}