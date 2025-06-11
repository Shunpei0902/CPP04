/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:17:32 by sasano            #+#    #+#             */
/*   Updated: 2025/06/11 09:58:58 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->_type = copy._type;
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*copy._brain);
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
std::string Dog::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}

void Dog::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}