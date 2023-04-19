/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:41:37 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/19 16:21:42 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class	Cat : public Animal
{
public:
	Cat();
	Cat(Cat &rhs);
	~Cat();
	Cat	&operator=(const Cat &rhs);
	void makeSound() const;
};

#endif