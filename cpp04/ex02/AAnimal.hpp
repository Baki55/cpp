/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:02:37 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/19 16:20:26 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

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
	virtual void	makeSound(void) const;
	std::string	getType() const;
};

#endif