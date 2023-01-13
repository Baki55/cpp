/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:50:39 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/13 16:10:51 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	std::string	name;
public:
	Zombie();
	Zombie(std::string);
	~Zombie();
	void	setName(std::string);
	void	annouce(void) const;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif