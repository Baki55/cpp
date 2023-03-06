/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:44:18 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 14:53:36 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Constructor called" <<std::endl;
}

Harl::~Harl()
{
	std::cout << "Destructor called" <<std::endl;
}

Harl::debug(void)
{
	std::cout << "Debug" <<std::endl;
}

Harl::info(void)
{
	std::cout << "Info" <<std::endl;
}

Harl::warning(void)
{
	std::cout << "Warning" <<std::endl;
}

Harl::error(void)
{
	std::cout << "Error" <<std::endl;
}