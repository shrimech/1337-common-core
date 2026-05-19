/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:32:57 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/08 12:33:39 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain();
        void setIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
};

#endif