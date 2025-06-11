/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:06:53 by sasano            #+#    #+#             */
/*   Updated: 2025/06/11 08:26:50 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    Animal a = Animal();
    std::cout << "Animal default" << std::endl;
    std::cout << a.getType() << ": ";
    a.makeSound();
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    Animal *b = new Animal("b");
    std::cout << "Animal b" << std::endl;
    std::cout << b->getType() << ": ";
    b->makeSound();
    delete b;
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    Dog dog = Dog();
    std::cout << "Dog" << std::endl;
    std::cout << dog.getType() << ": ";
    dog.makeSound();
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    Dog *j = new Dog();
    std::cout << "Dog j" << std::endl;
    std::cout << j->getType() << ": ";
    j->makeSound();
    delete j;
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    Cat cat = Cat();
    std::cout << "Cat" << std::endl;
    std::cout << cat.getType() << ": ";
    cat.makeSound();
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    Cat *i = new Cat();
    std::cout << "Cat i" << std::endl;
    std::cout << i->getType() << ": ";
    i->makeSound();
    delete i;
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    WrongAnimal *wrongAnimal = new WrongAnimal();
    std::cout << "WrongAnimal" << std::endl;
    std::cout << wrongAnimal->getType() << ": ";
    wrongAnimal->makeSound();
    delete wrongAnimal;
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    WrongAnimal *wrongCat = new WrongCat();
    std::cout << "WrongCat" << std::endl;
    std::cout << wrongCat->getType() << ": ";
    wrongCat->makeSound();
    delete wrongCat;
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    WrongCat wrongCat2 = WrongCat();
    std::cout << "WrongCat2" << std::endl;
    std::cout << wrongCat2.getType() << ": ";
    wrongCat2.makeSound();
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    return (0);
}