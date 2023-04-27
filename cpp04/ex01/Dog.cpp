/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:57:13 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/27 15:51:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
	try
	{
		this->brain = new Brain();
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory Allocation failed : " << e.what() << std::endl;
	}
}

Dog::Dog(Dog &rhs)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignement operator called." << std::endl;
	this->type = rhs.type;
	return(*this);
}

void	Dog::makeSound() const
{
	std::cout << "Waf Waf :)" << std::endl;
}