/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 04:54:32 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/29 04:24:57 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45) , target("default") 
{std::cout << "default constructor" <<std::endl;}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("Robotomy Request Form", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), target(other.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{std::cout << "RobotomyRequestForm Destructor called" << std::endl;}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    time_t now = time(0);
    if (!this->getIsSigned()) {
        throw std::runtime_error("Form is not signed!");
    }
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw Bureaucrat::GradeTooLowException();
    }

    std::cout << "drilling noises" << std::endl;

    if (now % 30 < 15) {
        std::cout << target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed on " << target << "!" << std::endl;
    }
}