/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 04:15:49 by sasano            #+#    #+#             */
/*   Updated: 2025/01/19 05:02:42 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain Assignation operator called" << std::endl;
    if (this == &copy)
        return (*this);
    for (int i = 0; i < 100; i++)
    {
        if (copy._ideas[i].length() > 0)
            this->_ideas[i].assign(copy._ideas[i]);
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return ("Invalid index");
    return (this->_ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
    if (index < 0 || index >= 100)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    this->_ideas[index] = idea;
}