/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:30:01 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/15 18:03:50 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon myW)
{
	std::cout << "Constructor called." << std::endl;
	this->name = str;
	this->myWeapon = myW;
	std::cout << "My name is " << this->name <<std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << std::endl;
}