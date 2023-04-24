/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:03:40 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/24 11:50:04 by bkhatib          ###   ########.fr       */
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
	const std::string	getType(void) const;
	void	setType(std::string);
};

#endif