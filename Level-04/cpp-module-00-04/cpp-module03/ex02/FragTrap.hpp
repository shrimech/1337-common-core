/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 05:11:47 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/01 05:23:16 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name = "origine");
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();
        void highFivesGuys();
};

#endif