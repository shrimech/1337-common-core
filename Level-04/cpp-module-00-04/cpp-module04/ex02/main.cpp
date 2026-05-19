/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 23:04:38 by shrimech          #+#    #+#             */
/*   Updated: 2026/01/08 19:27:18 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <cstdio>

int main()
{
    // Animal* meta = new Animal(); // This line will cause a compilation error because Animal is now an abstract class
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();

    Animal *animalArray[10];
    int i = 0;
    while ( i < 5)
    {
            animalArray[i] = new Dog();
            Dog *a = (Dog *)animalArray[i];
            a->GetBrain()->setIdea(i, "I want to play!");
            i++;
    }
    while( i < 10)
    {
        animalArray[i++] = new Cat();
        Cat *a = (Cat *)animalArray[i - 1];
        a->GetBrain()->setIdea(i - 1, "I want to sleep!");  
    }

    for (int i = 0; i < 10; i++)
    {
        animalArray[i]->makeSound();
        Cat *a = dynamic_cast<Cat *>(animalArray[i]);
        if (a)
            std::cout << a->GetBrain()->getIdea(i) << std::endl;
        Dog *b = dynamic_cast<Dog *>(animalArray[i]);
        if (b)
            std::cout << b->GetBrain()->getIdea(i) << std::endl;
    }

    for (int i = 0; i < 10; i++)
        delete animalArray[i];

    delete dog;
    delete cat;

    return 0;
}