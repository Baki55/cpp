/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:42:18 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/16 17:20:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	std::string	name;
	Weapon	&myWeapon;
public:
	HumanB(std::string);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &myW);
};

#endif