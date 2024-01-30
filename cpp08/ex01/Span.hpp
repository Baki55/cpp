/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:37:32 by bkhatib           #+#    #+#             */
/*   Updated: 2024/01/30 11:37:36 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{

private:
	unsigned int N;
	std::vector<int> numbers;
	Span();

public:
	Span(unsigned int n);
	~Span();
	Span(Span const &other);
	Span &operator=(Span const &other);
	void addNumber(int x);
	void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan() const;
	int longestSpan() const;
};

#endif