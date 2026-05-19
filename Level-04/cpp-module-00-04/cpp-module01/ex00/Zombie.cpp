/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 02:30:11 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/03 23:27:53 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void    Zombie::set_name(std::string Name)
{
    name = Name;
}
//-------------------------------------------------------------
void    Zombie::announce() {
    std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}
//-------------------------------------------------------------
Zombie* newZombie( std::string name ) {
    Zombie* new_zombie = new Zombie();
    new_zombie->set_name(name);
    return new_zombie;
}
//-------------------------------------------------------------
void    randomChump( std::string name ) {
    Zombie Zombie;
    Zombie.set_name(name);
    Zombie.announce();
}
