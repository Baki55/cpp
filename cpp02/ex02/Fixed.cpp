/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:48:53 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/10 15:08:46 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = rhs;
}

Fixed::Fixed(const int n) : fixedPointValue(n << fractionalBits)
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float n) : fixedPointValue(std::roundf(n * (1 << fractionalBits)))
{
	std::cout << "Float constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->fixedPointValue = rhs.getRawBits();
	return(*this);
}

int	Fixed::getRawBits(void) const
{
	return(fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->fixedPointValue >> fractionalBits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}