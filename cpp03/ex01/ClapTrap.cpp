/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:52:20 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/15 19:48:01 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "Second constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &rhs)
{
	std::cout << "Copy construcor called." << std::endl;
	*this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignement operator called." << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if(energyPoints <= 0)
		std::cout << name << " is out of energie." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(hitPoints <= amount)
		std::cout << "ClapTrap " << name << " is dead :'(." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " get " << amount << " of damage." << std::endl;
		hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(energyPoints <= 0)
		std::cout << name << " is out of energie." << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " get " << amount << " of health." << std::endl;
		energyPoints -= 1;
	}
}