/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:34:54 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/19 05:31:28 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Form Parameterized constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form& other)
    : name(other.name), isSigned(other.isSigned),
      gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Form Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->isSigned = other.isSigned;
        // name, gradeToSign, and gradeToExecute are const and cannot be assigned
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

const std::string& Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

void Form::beSigned(class Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw Bureaucrat::GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form Name: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No")
       << ", Grade to Sign: " << form.getGradeToSign()
       << ", Grade to Execute: " << form.getGradeToExecute();
    return os;
}