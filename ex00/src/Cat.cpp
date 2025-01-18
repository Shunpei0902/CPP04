/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:12:21 by sasano            #+#    #+#             */
/*   Updated: 2025/01/19 04:24:50 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
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
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " says Meow Meow" << std::endl;
}
