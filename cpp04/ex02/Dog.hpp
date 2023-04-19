/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:49:12 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/19 16:21:49 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class	Dog : public Animal
{
public:
	Dog();
	Dog(Dog &rhs);
	~Dog();
	Dog	&operator=(const Dog &rhs);
	void makeSound() const;
};

#endif