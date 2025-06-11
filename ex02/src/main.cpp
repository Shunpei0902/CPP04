/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:39:22 by sasano            #+#    #+#             */
/*   Updated: 2025/06/11 10:50:06 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#include <iostream>
#include <stdexcept>

int main()
{
	try
	{
		std::cout << "Constructing Animals..." << std::endl;
		const Animal *meta[10];

		for (int i = 0; i < 10; ++i)
		{
			if (i % 2)
				meta[i] = new Cat();
			else
				meta[i] = new Dog();
		}

		std::cout << "\nTesting Animals...\n"
				  << std::endl;
		for (int i = 0; i < 10; ++i)
		{
			std::cout << "Animal [" << i << "] type: " << meta[i]->getType() << std::endl;
			meta[i]->makeSound();
			std::cout << std::endl;
		}

		std::cout << "Deconstructing Animals..." << std::endl;
		for (int i = 0; i < 10; ++i)
			delete meta[i];

		std::cout << "\n--- Deep Copy Check ---\n"
				  << std::endl;

		std::cout << "Constructing Dog a..." << std::endl;
		Dog *a = new Dog();

		a->setIdea(0, "I have to sniff it");
		a->setIdea(1, "I have to pee on it");
		a->setIdea(2, "I have to sniff it again");

		std::cout << "Copying Dog a into Dog b..." << std::endl;
		Dog *b = new Dog(*a);

		std::cout << "\nTesting Dog a's ideas:" << std::endl;
		for (int i = 0; i < 3; ++i)
			std::cout << "a->idea[" << i << "] = " << a->getIdea(i) << std::endl;

		std::cout << "\nDeleting Dog a..." << std::endl;
		delete a;

		std::cout << "\nTesting Dog b's ideas (after a deleted):" << std::endl;
		for (int i = 0; i < 3; ++i)
			std::cout << "b->idea[" << i << "] = " << b->getIdea(i) << std::endl;

		std::cout << "\nDeleting Dog b..." << std::endl;
		delete b;

		// Abstract class Check
		// Animal *animal = Animal();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}
