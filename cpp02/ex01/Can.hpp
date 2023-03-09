/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Can.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:15:33 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/09 20:11:33 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAN_HPP
#define CAN_HPP

#include <iostream>

class	Fixed
{
	int	fixedPointValue;
	int static const	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &rhs);
	~Fixed();
	Fixed& operator=(const Fixed &rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif