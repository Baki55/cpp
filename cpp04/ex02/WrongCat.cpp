/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:24:36 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/18 18:25:22 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}