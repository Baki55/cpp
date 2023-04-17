/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:06:44 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/17 18:40:42 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap st("Baki");

	st.attack("Daki");
	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();

	return(EXIT_SUCCESS);
}