/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:30:01 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/16 17:15:22 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &myW) : name(str), myWeapon(myW) {}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->myWeapon.getType() << std::endl;
}