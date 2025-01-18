/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:12:21 by sasano            #+#    #+#             */
/*   Updated: 2025/01/19 05:05:53 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_brain = new Brain();
    if (!this->_brain)
    {
        std::cerr << "Failed to allocate memory for Brain" << std::endl;
        exit(1);
    }
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
    if (!this->_brain)
    {
        std::cerr << "Failed to allocate memory for Brain" << std::endl;
        exit(1);
    }
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

void Cat::getIdea(int index) const
{
    std::cout << "Idea " << index << ": " << this->_brain->getIdea(index) << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}