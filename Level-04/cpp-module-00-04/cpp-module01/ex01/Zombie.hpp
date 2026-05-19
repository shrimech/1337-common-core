/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 03:11:01 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 01:57:43 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//----------------- HEADER GUARD -----------------//
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

//----------------- INCLUDES -----------------//
#include <iostream>
#include <string>

//----------------- CLASS DEFINITION -----------------//
class Zombie {
    private:
        std::string name;
    public:
        void    set_name(std::string Name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );
    
#endif