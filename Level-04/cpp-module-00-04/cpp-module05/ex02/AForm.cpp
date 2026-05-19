/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:34:54 by shrimech          #+#    #+#             */
/*   Updated: 2026/02/03 05:56:34 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), isSigned(false), gradeToSign(75), gradeToExecute(75)
{
    std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Form Parameterized constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : name(other.name), isSigned(other.isSigned),
      gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "Form Copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "Form Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm Destructor called" << std::endl;
}

const std::string& AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::beSigned(class Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw Bureaucrat::GradeTooLowException();
    isSigned = true;
}

// void AForm::execute(Bureaucrat const & executor) const {
//     if (!this->getIsSigned()) {
//         throw std::runtime_error("Form is not signed!");
//     }
//     if (executor.getGrade() > this->getGradeToExecute()) {
//         throw Bureaucrat::GradeTooLowException();
//     }
// }

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form Name: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No")
       << ", Grade to Sign: " << form.getGradeToSign()
       << ", Grade to Execute: " << form.getGradeToExecute();
    return os;
}