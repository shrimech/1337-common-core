/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 07:09:17 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/04 07:41:06 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include "HumanB.hpp"
int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.attack();
jim.setWeapon(club);
club.setType("some other type of club");
jim.attack();
}
return 0 ;
}