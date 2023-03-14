/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:06:44 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/13 15:13:54 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ct("Baki");
	ClapTrap ct2;

	ct.attack("Daki");
	ct.takeDamage(20);
	ct.beRepaired(10);

	ct2 = ct;
	return(1);
}