/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:43:07 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/15 17:44:08 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanA::HumanB(std::string str)
{
	std::cout << "Constructor called." << std::endl;
	this->name = str;
	std::cout << "My name is " << this->name << std::endl;
}

HumanA::~HumanB()
{
	std::cout << "Destructor called" std::endl;
}

HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->myWeapon << std::endl;
}