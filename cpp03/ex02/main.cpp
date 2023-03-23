/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:06:44 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/15 20:36:15 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap ft("Baki");

	ft.attack("Daki");
	ft.takeDamage(20);
	ft.beRepaired(10);
	ft.highFivesGuys();

	return(EXIT_SUCCESS);
}