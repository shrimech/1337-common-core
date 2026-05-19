/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 05:20:52 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 07:09:00 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nam,Weapon &Weap) : name(nam),weapon(Weap) {}

void HumanA::attack(){
    std::cout << name << " attacks with their " << HumanA::weapon.getType() <<std::endl;
}
