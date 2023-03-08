/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:49:05 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/08 14:51:37 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Can.hpp"

int main( void )
{
	FixedPoint a;
	FixedPoint b(a);
	FixedPoint c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}