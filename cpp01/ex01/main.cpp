/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:30:53 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/14 13:32:15 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*nZombie;
	int	n = 5;
	
	nZombie = zombieHorde(n, "Baki");
	for(int i = 0; i < n; i++)
		nZombie[i].annouce();
	delete [] nZombie;
	return(1);
}