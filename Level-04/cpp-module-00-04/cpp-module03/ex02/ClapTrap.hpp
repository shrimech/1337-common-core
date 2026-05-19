/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 05:44:32 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 05:21:36 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap {
    protected:
        std::string name;
        unsigned int a_d ;
        unsigned int h_p ;
        unsigned int e_p ;
    public:
        ClapTrap(std::string name = "origine");
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &right);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif