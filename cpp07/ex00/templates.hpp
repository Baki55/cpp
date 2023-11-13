/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:12:52 by bkhatib           #+#    #+#             */
/*   Updated: 2023/11/13 11:22:11 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template <class T>
void	swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <class T>
T	min(T &x, T &y)
{
	return(x < y) ? x : y;
}

template <class T>

T	max(T &x, T &y)
{
	return(x > y) ? x : y;
}

#endif