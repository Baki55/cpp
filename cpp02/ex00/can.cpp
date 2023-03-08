/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:48:53 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/08 15:08:41 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Can.hpp"

FixedPoint::FixedPoint()
{
	std::cout << "Default constructor called." << std::endl;
	this->fixedPointValue = 0;
}

FixedPoint::FixedPoint(const FixedPoint &rhs)
{
	std::cout << "Copy constructor called." << std::endl;
	this->fixedPointValue = rhs.getRawBits();
}

FixedPoint::~FixedPoint()
{
	std::cout << "Destructor called." << std::endl;
}

FixedPoint& FixedPoint::operator=(const FixedPoint &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->fixedPointValue = rhs.getRawBits();
	return(*this);
}

int	FixedPoint::getRawBits(void) const
{
	std::cout << "getRawBits member function called." <<std::endl;
	return(fixedPointValue);
}

void	FixedPoint::setRawBits(int const raw)
{
	fixedPointValue = raw;
}