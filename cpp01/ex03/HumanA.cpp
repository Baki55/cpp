/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:30:01 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/15 17:38:27 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon myW)
{
	std::cout << "Constructor called." << std::endl;
	this->name = str;
	this->myWeapon = myW;
	std::cout << "My name is " << this->name << " and i have a " << this->myWeapon <<std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called" std::endl;
}

HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->myWeapon << std::endl;
}