/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:35:03 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/19 05:31:41 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(class Bureaucrat& bureaucrat);
};
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif