/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:48:53 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/25 00:11:22 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {}

Fixed::Fixed(const Fixed &rhs)
{
	*this = rhs;
}

Fixed::Fixed(const int n) : fixedPointValue(n << fractionalBits) {}

Fixed::Fixed(const float n) : fixedPointValue(std::roundf(n * (1 << fractionalBits))) {}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	this->fixedPointValue = rhs.getRawBits();
	return(*this);
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return(this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return(this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return(this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return(this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return(this->getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed& Fixed::operator++(void)
{
	++this->fixedPointValue;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);
	tmp.fixedPointValue = this->fixedPointValue++;
	return(tmp);
}

Fixed& Fixed::operator--(void)
{
	--this->fixedPointValue;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	tmp.fixedPointValue = this->fixedPointValue--;
	return(tmp);
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

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if(f1.getRawBits() < f2.getRawBits())
		return(f1);
	return(f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if(f1.getRawBits() < f2.getRawBits())
		return(f1);
	return(f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if(f1.getRawBits() > f2.getRawBits())
		return(f1);
	return(f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if(f1.getRawBits() > f2.getRawBits())
		return(f1);
	return(f2);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}