/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 05:44:07 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 04:58:28 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    ScavTrap scav("Scavvy");
    scav.attack("Target2");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    return 0;
}
