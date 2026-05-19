/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 05:44:24 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 05:27:39 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : a_d(0) , h_p(10),  e_p(10) {
    this->name = name;
    std::cout << "ClapTrap default constructor called \n";
}

ClapTrap::ClapTrap(const ClapTrap &other){
    *this = other;
    std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
    if (this != &other) {
        this->name = other.name;
        this->a_d = other.a_d;
        this->e_p = other.e_p;
        this->h_p = other.h_p;
    }
    return(*this);
}

void ClapTrap::attack(const std::string& target){
    if (h_p <= 0 || e_p <= 0){
        std::cout << "ClapTrap " << this->name << " can't attack\n";
        return;
    }
    e_p--;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << a_d << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
    if (h_p == 0)
    {
        std::cout << "ClapTrap " << name << " is already destroyed.\n";
        return;
    }
    h_p = (amount >= h_p) ? 0 : h_p - amount;
    std::cout << "ClapTrap " << name << " takes "
              << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
    if (h_p == 0 || e_p == 0)
    {
        std::cout << "ClapTrap " << name << " can't repair.\n";
        return;
    }
    e_p--;
    h_p += amount;
    std::cout << "ClapTrap " << name << " repairs itself and gains "
              << amount << " hit points!\n";
}