/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:06:58 by bkhatib           #+#    #+#             */
/*   Updated: 2023/11/13 18:14:44 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void	iter(T *array, std::size_t size, void(*f)(T &))
{
	for(size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif