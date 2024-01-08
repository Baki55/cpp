/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:22:36 by bkhatib           #+#    #+#             */
/*   Updated: 2023/11/14 16:00:56 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int	size;
	T	*data;

public:
	Array() : size(0), data(nullptr) {}
	Array(unsigned int n) : size(n), data(new T[n]) {}
	Array(Array &src) : size(src.size), data(new T[src.size])
	{
		for(unsigned int i = 0; i < size; i++)
			data[i] = src.data[i];
	}
	~Array() {delete[] data;}
	
	Array &operator=(const Array &src)
	{
		if(this != src)
		{
			if(this->data != NULL)
				delete[] data;
			size = src.size;
			data = new T[size];
			for(unsigned int i = 0; i < size; i++)
				data[i] = src.data[i];
		}
		return(*this);
	}
	T &operator[](unsigned int i)
	{
		if(size == 0 || i >= size)
			throw std::out_of_range("Index out of bounds");
		return(data[i]);
	}
	
	unsigned int getSize() const {return(size);}
};