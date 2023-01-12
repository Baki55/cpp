/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:50:39 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/12 16:17:38 by bkhatib          ###   ########.fr       */
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
	~Zombie();
	void	annouce(void) const;
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
};

#endif