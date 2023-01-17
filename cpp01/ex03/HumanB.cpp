/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:43:07 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/17 14:16:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : name(str)
{
	this->myWeapon = NULL;
}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->myWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &myW)
{
	this->myWeapon = &myW;
}