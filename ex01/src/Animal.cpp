/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 03:07:23 by sasano            #+#    #+#             */
/*   Updated: 2025/01/19 04:24:31 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("default")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal Constructor for " << _type << " called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    this->_type = copy._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}

// void Animal::makeSound() const
// {
//     std::cout << "This animal doesn't make any sound." << std::endl;
// }

