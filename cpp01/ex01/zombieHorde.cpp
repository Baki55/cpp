/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:26:35 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/14 12:52:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*nZombie = new Zombie[N];
	
	for(int i = 0; i < N; i++)
		nZombie[i].setName(name);
	return(nZombie);
}