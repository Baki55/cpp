/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:42:18 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 12:29:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	std::string	name;
	Weapon	*myWeapon;
public:
	HumanB(std::string);
	~HumanB();
	void	attack(void) const;
	void	setWeapon(Weapon &myW);
};

#endif