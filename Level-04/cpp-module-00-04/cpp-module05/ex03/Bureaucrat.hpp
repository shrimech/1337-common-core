/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:40:55 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/27 08:07:54 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"


class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(int grade, const std::string name);
        Bureaucrat(Bureaucrat const &other);
        Bureaucrat& operator=(Bureaucrat const &other);
        ~Bureaucrat();

        const std::string& getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
        void signForm(class AForm& form);
        void executeForm(AForm const & form) const;
        
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);



#endif