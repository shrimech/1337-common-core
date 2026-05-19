/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 05:44:32 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/31 21:25:52 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap {
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