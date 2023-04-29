/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:02:37 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/27 15:54:14 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string type);
	Animal(Animal &rhs);
	virtual	~Animal();
	Animal	&operator=(const Animal &rhs);
	virtual void	makeSound( void ) const;
	std::string	getType() const;
};

#endif