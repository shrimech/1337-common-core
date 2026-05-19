/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 05:44:07 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 05:31:34 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    ClapTrap copy(clap);
    copy.takeDamage(20);
    copy.takeDamage(20);
    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    ScavTrap scav("Scavvy");
    ScavTrap scavCopy(scav);
    scavCopy.takeDamage(10);
    scav.attack("Target2");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    FragTrap frag("Fraggy");
    frag.attack("Target3");
    frag.takeDamage(30);
    frag.beRepaired(15);
    frag.highFivesGuys();

    return 0;
}