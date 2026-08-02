/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:13:32 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/27 08:16:11 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
int main() {
    try {
        Bureaucrat bob(1,"Bob");
        ShrubberyCreationForm form("sbo3a");
        RobotomyRequestForm roboForm("Alice");

        bob.executeForm(form);
        
        std::cout << bob << std::endl;
        std::cout << form << std::endl;
        std::cout << roboForm << std::endl;
        
        roboForm.beSigned(bob);
        form.beSigned(bob);
        std::cout << bob << std::endl;
        std::cout << form << std::endl;
        std::cout << roboForm << std::endl;
        std::cout << "Form signed by " << bob.getName() << std::endl;

        roboForm.execute(bob);
        form.execute(bob);
        std::cout << "Form executed by " << bob.getName() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}