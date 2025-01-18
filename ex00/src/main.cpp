/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:06:53 by sasano            #+#    #+#             */
/*   Updated: 2025/01/19 03:43:54 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongj = new WrongCat();

    std::cout << std::endl;
    std::cout << "Dog" << std::endl;
    std::cout << j->getType() << " ";
    j->makeSound();
    std::cout << std::endl;
    std::cout << "Cat" << std::endl;
    std::cout << i->getType() << " ";
    i->makeSound();
    std::cout << std::endl;
    std::cout << "WrongAnimal" << std::endl;
    std::cout << wrong->getType() << " ";
    wrong->makeSound();
    std::cout << std::endl;
    std::cout << "WrongCat" << std::endl;
    std::cout << wrongj->getType() << " ";
    wrongj->makeSound();
    std::cout << std::endl;

    delete j;
    delete i;
    delete wrong;
    delete wrongj;
    return (0);
}