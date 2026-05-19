/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:41:03 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/29 04:36:05 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1){
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, const std::string name) : name(name), grade(grade){
    std::cout << "Bureaucrat Parameterized constructor called" << std::endl;
    if (this->grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    if (this->grade > 150)
        throw(Bureaucrat::GradeTooLowException());    
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name), grade(other.grade) {std::cout << "Bureaucrat Copy constructor called" << std::endl;}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other) {
    if (this != &other) {
        this->grade = other.grade;
    }
    return *this;
}

const std::string& Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

void Bureaucrat::incrementGrade() {
    if (this->grade - 1 < 1)
    throw(Bureaucrat::GradeTooHighException());
    this->grade--;
}

void Bureaucrat::decrementGrade() {
    if (this->grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    this->grade++;
}

Bureaucrat::~Bureaucrat() 
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

void Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const {
    try {
        form.execute(*this);
        std::cout << this->name << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}