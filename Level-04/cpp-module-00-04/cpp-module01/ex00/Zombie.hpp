/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 02:27:15 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/03 23:31:55 by shrimech         ###   ########.fr       */
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
        void set_name(std::string Name);
        void announce();
};


void randomChump( std::string name );    
Zombie* newZombie( std::string name );

#endif