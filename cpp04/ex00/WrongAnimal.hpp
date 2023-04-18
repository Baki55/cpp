/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:14:06 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/18 18:16:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	~WrongAnimal();

	WrongAnimal(const WrongAnimal& rhs);
	WrongAnimal &operator=(const WrongAnimal &rhs);

	void	makeSound() const;
	std::string	getType() const; 
};

#endif