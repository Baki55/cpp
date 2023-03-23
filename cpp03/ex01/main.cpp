/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:06:44 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/15 19:57:31 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap st("Baki");

	st.attack("Daki");
	st.takeDamage(20);
	st.beRepaired(10);

	return(EXIT_SUCCESS);
}