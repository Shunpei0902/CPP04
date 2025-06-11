/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:12:21 by sasano            #+#    #+#             */
/*   Updated: 2025/06/11 10:00:03 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->_type = copy._type;
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*copy._brain);
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " says Meow Meow" << std::endl;
}

std::string Cat::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}

void Cat::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}