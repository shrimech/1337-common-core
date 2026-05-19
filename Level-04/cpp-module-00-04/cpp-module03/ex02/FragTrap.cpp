/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 05:11:57 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 05:39:15 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->h_p = 100;
    this->e_p = 100;
    this->a_d = 30;
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap &other){
    if (this != &other) {
        this->name = other.name;
        this->a_d = other.a_d;
        this->e_p = other.e_p;
        this->h_p = other.h_p;
    }
    return(*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->name << " is requesting a high five!\n";
}
