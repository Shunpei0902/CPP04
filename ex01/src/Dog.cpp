/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:17:32 by sasano            #+#    #+#             */
/*   Updated: 2025/01/19 04:31:21 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_brain = new Brain();
    if (!this->_brain)
    {
        std::cout << "Failed to allocate memory for Brain" << std::endl;
        exit(1);
    }
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
    if (!this->_brain)
    {
        std::cout << "Failed to allocate memory for Brain" << std::endl;
        exit(1);
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << this->getType() << " says Woof Woof" << std::endl;
}

void Dog::getIdea(int index) const
{
    std::cout << "Idea " << index << ": " << this->_brain->getIdea(index) << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}