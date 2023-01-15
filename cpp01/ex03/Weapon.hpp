/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:03:40 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/15 18:04:59 by bkhatib          ###   ########.fr       */
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
	const std::string	&getType(void);
	void	setType(std::string);
};

#endif