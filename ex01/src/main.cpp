/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:06:53 by sasano            #+#    #+#             */
/*   Updated: 2025/06/11 10:07:35 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const int size = 2;
	Animal *arrayAnimals[2 * size];

	for (int i = 0; i < size; i++)
	{
		arrayAnimals[i] = new Dog();
		arrayAnimals[size + i] = new Cat();
	}
	std::cout << "=====================================" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 2 * size; i++)
	{
		std::cout << " [" << i << "] " << arrayAnimals[i]->getType() << ": ";
		arrayAnimals[i]->makeSound();
	}
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;

	for (int i = 0; i < 2 * size; i++)
		delete arrayAnimals[i];

	Dog a;
	Dog *b = new Dog();
	Cat c;
	Cat *d = new Cat();
	a.setIdea(0, "I am a dog");
	a.setIdea(1, "I love bones");
	a.setIdea(2, "I like to bark");
	b->setIdea(0, "I am a dog!!!!!!");
	b->setIdea(1, "I love bones!!!!!!");
	b->setIdea(2, "I like to bark!!!!!!");
	c.setIdea(0, "I am a cat");
	c.setIdea(1, "I love fish");
	c.setIdea(2, "I like to meow");
	d->setIdea(0, "I am a cat!!!!!!");
	d->setIdea(1, "I love fish!!!!!!");
	d->setIdea(2, "I like to meow!!!!!!");
	std::cout << " Dog a ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << a.getIdea(j) << std::endl;
	}
	std::cout << " Dog b ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << b->getIdea(j) << std::endl;
	}

	std::cout << " Cat c ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << c.getIdea(j) << std::endl;
	}
	std::cout << " Cat d ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << d->getIdea(j) << std::endl;
	}
	std::cout << "=====================================" << std::endl;

	Dog copy_dog = Dog(*b);
	std::cout << "Copy Dog ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << copy_dog.getIdea(j) << std::endl;
	}
	std::cout << std::endl;
	Cat copy_cat = *d;
	std::cout << "Copy Cat ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << copy_cat.getIdea(j) << std::endl;
	}
	std::cout << "=====================================" << std::endl;
	copy_dog.setIdea(0, "????????????????????");
	copy_cat.setIdea(0, "????????????????????");
	std::cout << "After changing copy ideas:" << std::endl;
	std::cout << " Dog a ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << a.getIdea(j) << std::endl;
	}
	std::cout << " Dog b ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << b->getIdea(j) << std::endl;
	}
	std::cout << " Copy Dog ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << copy_dog.getIdea(j) << std::endl;
	}
	std::cout << " Cat c ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << c.getIdea(j) << std::endl;
	}
	std::cout << " Cat d ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << d->getIdea(j) << std::endl;
	}
	std::cout << " Copy Cat ideas:" << std::endl;
	for (int j = 0; j < 3; j++)
	{
		std::cout << " [" << j << "] " << copy_cat.getIdea(j) << std::endl;
	}

	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	delete b;
	delete d;
	std::cout << "=====================================" << std::endl;
	return 0;
}
