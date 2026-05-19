/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 03:26:26 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 05:17:57 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string typ)  {type = typ;}

std::string &Weapon::getType()  {return type;}

void Weapon::setType(std::string newtype)  {type = newtype;}