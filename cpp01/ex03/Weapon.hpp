/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:03:40 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 12:22:24 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIOLENCE_HPP
#define VIOLENCE_HPP

#include <iostream>

class Weapon
{
	std::string	type;
public:
	Weapon();
	Weapon(std::string);
	std::string	&getType(void) const;
	void	setType(std::string);
};

#endif