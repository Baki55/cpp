/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:43:07 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 12:30:02 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : name(str)
{
	this->myWeapon = NULL;
}

HumanB::~HumanB(){}

void	HumanB::attack() const
{
	std::cout << this->name << " attacks with their " << this->myWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &myW)
{
	this->myWeapon = &myW;
}