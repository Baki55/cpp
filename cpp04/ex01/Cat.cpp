/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:46:42 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/27 15:51:00 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
	try
	{
		this->brain = new Brain();
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory Allocation failed : " << e.what() << std::endl;
	}
}

Cat::Cat(Cat &rhs)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignement operator called." << std::endl;
	this->type = rhs.type;
	return(*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou Miaou :)" << std::endl;
}