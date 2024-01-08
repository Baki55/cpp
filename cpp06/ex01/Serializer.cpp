/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:37:38 by bkhatib           #+#    #+#             */
/*   Updated: 2024/01/07 19:26:48 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast< uintptr_t >(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast< Data* >(raw);
}