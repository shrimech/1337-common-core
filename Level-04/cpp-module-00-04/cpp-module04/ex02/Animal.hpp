/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:43:56 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/08 19:25:18 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif