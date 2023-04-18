/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:28:37 by bkhatib           #+#    #+#             */
/*   Updated: 2023/04/18 13:33:34 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

int	main(void)
{
	Animal a("Baki");
	Dog d;
	
	d.makeSound();
	std::cout << d.getType() << std::endl;
	std::cout << a.getType() << std::endl;
	
	return(EXIT_SUCCESS);
}