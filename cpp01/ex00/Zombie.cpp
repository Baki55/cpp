/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:15:57 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/14 11:51:48 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "(null)";
}

Zombie::Zombie(std::string str)
{
	this->name = str;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called on " << this->name << " the Zombie" << std::endl;
}

void	Zombie::annouce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string str)
{
	this->name = str;
}