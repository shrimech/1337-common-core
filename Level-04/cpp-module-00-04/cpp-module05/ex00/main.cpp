/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:13:32 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/27 04:18:44 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b1(0, "abdo");
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b2(151, "hamza");
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b3(75, "salah");
        std::cout << b3.getName() << ", Grade: " << b3.getGrade() << std::endl;
        b3.incrementGrade();
        std::cout << "After increment: " << b3.getName() << ", Grade: " << b3.getGrade() << std::endl;
        b3.decrementGrade();
        b3.decrementGrade();
        std::cout << "After two decrements: " << b3.getName() << ", Grade: " << b3.getGrade() << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "Unexpected error: " << std::endl;
    }
}