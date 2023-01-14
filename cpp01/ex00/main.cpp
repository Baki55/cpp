/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:26:26 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/14 11:57:54 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie[2];
	
	zombie[0].setName("Baki");
	zombie[1].setName("Messi");
	zombie[0].annouce();
	zombie[1].annouce();
	return (0);
}