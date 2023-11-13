/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:22:40 by bkhatib           #+#    #+#             */
/*   Updated: 2023/11/13 17:54:29 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int	main(void)
{
	int	x = 0;
	int	y = 1;

	char	c1 = 'a';
	char	c2 = 'b';

	std::string	s1 = "str1";
	std::string	s2 = "str2";

	std::cout << "---------- int ----------" << std::endl;
	std::cout << "min(" << x << "," << y << ") = " << ::min(x, y) << std::endl;
	std::cout << "max(" << x << "," << y << ") = " << ::max(x, y) << std::endl;
	std::cout << "before swap x = " << x << std::endl;
	std::cout << "before swap y = " << y << std::endl;

	::swap(x, y);

	std::cout << "after swap x = " << x << std::endl;
	std::cout << "after swap y = " << y << std::endl;

	std::cout << "---------- char ----------" << std::endl;
	std::cout << "min(" << c1 << "," << c2 << ") = " << ::min(c1, c2) << std::endl;
	std::cout << "max(" << c1 << "," << c2 << ") = " << ::max(c1, c2) << std::endl;
	std::cout << "before swap c1 = " << c1 << std::endl;
	std::cout << "before swap c2 = " << c2 << std::endl;

	::swap(c1, c2);

	std::cout << "after swap c1 = " << c1 << std::endl;
	std::cout << "after swap c2 = " << c2 << std::endl;

	std::cout << "---------- string ----------" << std::endl;
	std::cout << "min(" << s1 << "," << s2 << ") = " << ::min(s1, s2) << std::endl;
	std::cout << "max(" << s1 << "," << s2 << ") = " << ::max(s1, s2) << std::endl;
	std::cout << "before swap s1 = " << s1 << std::endl;
	std::cout << "before swap s2 = " << s2 << std::endl;

	::swap(s1, s2);
	
	std::cout << "after swap s1 = " << s1 << std::endl;
	std::cout << "after swap s2 = " << s2 << std::endl;
}