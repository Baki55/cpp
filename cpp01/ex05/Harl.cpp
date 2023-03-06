/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:44:18 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 18:48:19 by bkhatib          ###   ########.fr       */
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

void	Harl::debug(void)
{
	std::cout << "Debug" <<std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info" <<std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning" <<std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error" <<std::endl;
}

void	Harl::complain(std::string level)
{
	t_func	f[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"debug", "info", "warning", "error"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*f[i])();
}