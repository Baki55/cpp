/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:02:37 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/18 13:42:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

class	Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string type);
	Animal(Animal &rhs);
	~Animal();
	Animal	&operator=(const Animal &rhs);
	std::string	getType();
};

#endif