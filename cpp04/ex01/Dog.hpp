/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:49:12 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/27 15:47:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	Brain		*brain;
public:
	Dog();
	Dog(Dog &rhs);
	~Dog();
	Dog	&operator=(const Dog &rhs);
	void makeSound() const;
};

#endif