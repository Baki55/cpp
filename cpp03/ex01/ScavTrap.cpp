/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:50:31 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/25 17:26:01 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	std::cout << "ScavTrap constructor called." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if(this->energyPoints <= 0)
		std::cout << "ScravTrap " << this->name << " is out of ernery." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << " and causing " << this->attackDamage << " damage." << std::endl;
		this->energyPoints -= 1;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap entered on Gate keeper mode." << std::endl;
}