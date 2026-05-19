/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 22:23:20 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 05:38:07 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->h_p = 100;
    this->e_p = 50;
    this->a_d = 20;
    std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
    if (this != &other) {
        this->name = other.name;
        this->a_d = other.a_d;
        this->e_p = other.e_p;
        this->h_p = other.h_p;
    }
    return(*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode.\n";
}

void ScavTrap::attack(const std::string& target){
    if (h_p <= 0 || e_p <= 0){
        std::cout << "ScavTrap " << this->name << " can't attack\n";
        return;
    }
    e_p--;
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << a_d << " points of damage!\n";
}