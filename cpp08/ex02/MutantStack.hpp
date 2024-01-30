/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:41:15 by bkhatib           #+#    #+#             */
/*   Updated: 2024/01/30 11:41:23 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>

// https://en.cppreference.com/w/cpp/container/stack
template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(MutantStack<T> const &other) : std::stack<T>(other) {}
	MutantStack<T> &operator=(MutantStack<T> const &other)
	{
		std::stack<T>::operator=(other);
	}
	~MutantStack() {}

	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	const_iterator cbegin() const
	{
		return this->c.cbegin();
	}

	const_iterator cend() const
	{
		return this->c.cend();
	}
};

#endif