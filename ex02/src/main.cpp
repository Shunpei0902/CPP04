/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:06:53 by sasano            #+#    #+#             */
/*   Updated: 2025/01/19 05:17:20 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "Constructing" << std::endl;
	const Animal	*meta[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			meta[i] = new Cat();
			if (meta[i] == NULL)
			{
				std::cerr << "Cat allocation failed" << std::endl;
				exit(1);
			}
		}
		else
		{
			meta[i] = new Dog();
			if (meta[i] == NULL)
			{
				perror("Dog allocation failed");
				std::cerr << "Failed to allocate memory for Dog" << std::endl;
				exit(1);
			}
		}
	}
	std::cout << std::endl;

	std::cout << "Testing" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		std::cout << "Animal _type: " << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Deconstructing" << std::endl;
	for (int i = 0; i < 10; i++)
		delete(meta[i]);

	std::cout << std::endl << std::endl;
	std::cout << "showing that the copy constructor creates a deep copy" << std::endl;
	std::cout << std::endl;

	std::cout << "Constructing" << std::endl;
	Dog *a = new Dog();
	// Cat *a = new Cat();
	if (a == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}

	a->setIdea(0, "I have to sniff it");
	a->setIdea(1, "I have to pee on it");
	a->setIdea(2, "I have to sniff it again");
	a->setIdea(101, "some shit");

	Dog *b = new Dog(*a);
	// Cat *b = new Cat(*a);
	if (b == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	std::cout << std::endl;

	std::cout << "Testing a" << std::endl;
	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
	a->getIdea(0);
	a->getIdea(1);
	a->getIdea(2);
	std::cout << std::endl;

	std::cout << "Deconstructing a" << std::endl;
	delete(a);
	std::cout << std::endl;

	std::cout << "Testing b" << std::endl;
	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
	b->getIdea(0);
	b->getIdea(1);
	b->getIdea(2);
	std::cout << std::endl;

	std::cout << "Deconstructing b" << std::endl;
	delete(b);

	return (0);
}