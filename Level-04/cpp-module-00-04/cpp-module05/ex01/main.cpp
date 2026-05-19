/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:13:32 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/27 04:19:27 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bob(50, "Bob");
        Form taxForm("Tax Form",30, 10);
        bob.signForm(taxForm);
        for(int i = 0; i < 25; ++i)
        {
            bob.incrementGrade();
        }
        bob.signForm(taxForm);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "unexpected error" << std::endl;
    }
}