/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:52:20 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/13 15:12:51 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
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
	std::cout << "attack: " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage: " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired: " << amount << std::endl;
}