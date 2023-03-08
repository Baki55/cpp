/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Can.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:15:33 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/08 14:59:34 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAN_HPP
#define CAN_HPP

#include <iostream>

class	FixedPoint
{
	int	fixedPointValue;
	int static const	fractionalBits = 8;
public:
	FixedPoint();
	FixedPoint(const FixedPoint &rhs);
	~FixedPoint();
	FixedPoint& operator=(const FixedPoint &rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif