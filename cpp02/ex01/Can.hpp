/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Can.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:15:33 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/09 20:48:44 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAN_HPP
#define CAN_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	int	fixedPointValue;
	int static const	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &rhs);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed& operator=(const Fixed &rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif