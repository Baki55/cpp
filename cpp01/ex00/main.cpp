/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:26:26 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 12:00:58 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie[2];
	Zombie	*z;

	zombie[0].setName("Baki");
	zombie[0].annouce();
	zombie[1].setName("Messi");
	zombie[1].annouce();
	z = newZombie("Bib");
	z->annouce();
	delete z;
	randomChump("Bob");
	return (0);
}