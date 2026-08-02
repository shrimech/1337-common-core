/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 05:24:17 by shrimech          #+#    #+#             */
/*   Updated: 2026/02/03 05:51:04 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern& other) {
    (void)other;
    std::cout << "Intern Copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern Destructor called" << std::endl;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    std::string formNames[3] = {
        "ShrubberyCreation",
        "RobotomyRequest",
        "PresidentialPardon"
    };
    int i = 0;
    while (i < 3 && formName != formNames[i]) {i++;}
    switch (i) {
        case 0:
            std::cout << "Intern creates " << formName << " form." << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << formName << " form." << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << formName << " form." << std::endl;
            return new PresidentialPardonForm(target);
    }
    throw UnknownFormException();
}

const char* Intern::UnknownFormException::what() const throw() {
    return "Error: Unknown form name!";
}