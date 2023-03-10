/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:21:52 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 12:24:25 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	std::string	name;
	Weapon	&myWeapon;
public:
	HumanA(std::string str, Weapon &myW);
	~HumanA();
	void	attack() const;
};

#endif