/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 06:50:49 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 07:49:33 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nam) : name(nam), weapon(NULL) {}

void HumanB::setWeapon(Weapon &weapo)  {weapon = &weapo;}

Weapon* HumanB::getWeapon()  {return(weapon);}

void HumanB::attack(){
    Weapon *a = HumanB::getWeapon();
    if (a)
        std::cout << name << " attacks with their " << a->getType() <<std::endl;
    else
        std::cout << name << " without weapon"<<std::endl;
}


