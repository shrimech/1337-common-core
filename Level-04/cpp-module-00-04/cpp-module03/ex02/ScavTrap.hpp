/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 22:22:47 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 04:57:42 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name = "origine");
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();
        void attack(const std::string& target); 
        void guardGate();
};


#endif