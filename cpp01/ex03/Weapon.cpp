/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:25:51 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/15 18:05:19 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string str)
{
	this->type = str;
}

const std::string	&Weapon::getType(void)
{
	return(this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}