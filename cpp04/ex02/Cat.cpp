/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:46:42 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/18 16:13:19 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &rhs)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Copy assignement operator called." << std::endl;
	this->type = rhs.type;
	return(*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou :)" << std::endl;
}