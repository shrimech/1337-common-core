/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 03:11:16 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 01:58:56 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void    Zombie::set_name(std::string Name)
{
    name = Name;
}

void Zombie::announce() {
    std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombie = new Zombie[N]();
    for (int i = 0 ; i < N ; i++)
        zombie[i].set_name(name);
    return(zombie);
}