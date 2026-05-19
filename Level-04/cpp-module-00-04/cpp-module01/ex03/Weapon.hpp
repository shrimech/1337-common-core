/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 03:19:43 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 05:16:06 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string typ);
        std::string &getType();
        void setType(std::string typ);
};


#endif