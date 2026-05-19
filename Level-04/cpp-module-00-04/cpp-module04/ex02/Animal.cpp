/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 22:55:00 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/08 18:25:09 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound!" << std::endl;
}

