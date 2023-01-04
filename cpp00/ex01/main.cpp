/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:08:16 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/04 15:20:04 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main(void)
{
	Contact	contact1("b", "k", "bk", "5", "kb");
	
	std::cout << "first name:" << contact1.first_name << std::endl;
	return(0);
}