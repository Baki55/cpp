/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:50:31 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/15 20:10:16 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	std::cout << "Second ScavTrap construcor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap entered on Gate keeper mode." << std::endl;
}