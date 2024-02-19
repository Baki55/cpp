/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:54:51 by bkhatib           #+#    #+#             */
/*   Updated: 2024/02/19 10:54:55 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
private:
	std::stack<int> data;
	bool isValidOperator(char c);
	void handleDigit(char c, std::stringstream &ss);
	void handleOperators(char c);
public:
	RPN();
	~RPN();
	RPN(RPN const &other);
	RPN& operator=(RPN const &other);
	void evaluate(std::string evaluate);
};

#endif