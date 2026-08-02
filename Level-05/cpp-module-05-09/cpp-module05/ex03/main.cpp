/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:13:32 by shrimech          #+#    #+#             */
/*   Updated: 2026/02/03 06:01:49 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    Intern someRandomIntern;
    AForm* rrf = NULL;
    try {
        rrf = someRandomIntern.makeForm("RoboomyRequest", "Bender");
        Bureaucrat bob(1,"Bob");
        bob.signForm(*rrf);
        bob.executeForm(*rrf);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    if (rrf)
        delete rrf;

    // try {
    //     // AForm* unknownForm = someRandomIntern.makeForm("unknown form", "Target");
    // } catch (const std::exception& e) {
    //     std::cerr << e.what() << std::endl;
    // }

    return 0;
}