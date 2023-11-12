/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:17:01 by bkhatib           #+#    #+#             */
/*   Updated: 2023/11/12 19:39:01 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "data.hpp"

uintptr_t	serialize(Data *data)
{
	return(reinterpret_cast< uintptr_t >(data));
}

Data	*deserialize(uintptr_t data)
{
	return(reinterpret_cast< Data* >(data));
}

int main(void)
{
	Data *data = new Data;
	Data *data2;
	uintptr_t	raw;
	
	data->name = "Baki";
	raw = serialize(data);
	std::cout << "reinterpratation: " << data->name << " => " << raw << std::endl;
	data2 = deserialize(raw);
	
	std::cout << "deserialize: " << data << " == " << data2 << std::endl;
	std::cout << data->name << " == " << data2->name << std::endl;

	delete data;
	
	return(EXIT_SUCCESS);
}