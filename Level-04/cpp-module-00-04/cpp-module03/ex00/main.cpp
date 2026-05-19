/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 05:44:07 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/31 08:25:12 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;

    a.attack("target");
    a.takeDamage(3);
    a.beRepaired(5);

    a.attack("another target");
    a.takeDamage(20);
    a.beRepaired(10);
    a.attack("final target");

    return 0;
}
