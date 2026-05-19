/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 22:54:05 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/08 18:10:04 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
        Brain* GetBrain() const;
};

#endif