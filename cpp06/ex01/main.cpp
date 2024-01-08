/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:17:01 by bkhatib           #+#    #+#             */
/*   Updated: 2024/01/08 20:14:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "data.hpp"
#include "Serializer.hpp"

int main(void)
{
	Data *data = new Data;
	Data *data2;
	uintptr_t	raw;
	
	data->name = "Baki";
	raw = Serializer::serialize(data);
	std::cout << "reinterpratation: " << data->name << " => " << raw << std::endl;
	data2 = Serializer::deserialize(raw);
	
	std::cout << "deserialize: " << data << " == " << data2 << std::endl;
	std::cout << data->name << " == " << data2->name << std::endl;

	delete data;
	
	return(EXIT_SUCCESS);
}