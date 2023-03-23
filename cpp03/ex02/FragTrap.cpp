/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:29:25 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/15 20:34:51 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
	std::cout << "Second FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap called." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "High fives guys ?" << std::endl;
}