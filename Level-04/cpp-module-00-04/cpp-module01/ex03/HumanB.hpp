/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 06:50:45 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 07:49:47 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string nam);
        void attack();
        void setWeapon(Weapon &weapon);
        Weapon *getWeapon();
};
#endif