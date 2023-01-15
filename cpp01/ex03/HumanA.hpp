/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:21:52 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/15 17:29:12 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	std::string	name;
	Weapon	myWeapon;
public:
	HumanA(std::string, Weapon);
	~HumanA();
	attack();
};