/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:03:40 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/14 17:21:30 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIOLENCE_HPP
#define VIOLENCE_HPP

#include <iostream>

class Weapon
{
	std::string	type;
public:
	Weapon(std:string);
	const std::string	&getType(void);
	void	set_type(std::string);
}





#endif