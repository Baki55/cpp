/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:18:07 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/19 15:32:39 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain &rhs)
{
    *this = rhs;
}

Brain& Brain::operator=(const Brain &rhs)
{
    std::cout << "<Brain.cpp:32> Brain copy called." << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}