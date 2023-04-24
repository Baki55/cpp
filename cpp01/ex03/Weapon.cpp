/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:25:51 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/24 11:52:21 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string str) : type(str) {}

const std::string	Weapon::getType(void) const
{
	return(this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}