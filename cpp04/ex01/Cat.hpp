/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:41:37 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/27 15:44:24 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	Brain	*brain;
public:
	Cat();
	Cat(Cat &rhs);
	~Cat();
	Cat	&operator=(const Cat &rhs);
	void makeSound() const;
};

#endif