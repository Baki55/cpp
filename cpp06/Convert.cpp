/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:29:25 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/31 16:09:51 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Convert.hpp>

ScalarConverter::ScalarConverter(void)
{
	_c = '\0';
	_n = 0;
	_f = 0f;
	_d = 0.0;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter(void)
{}

ScalarConverter::ScalarConverter& operator=(const ScalarConverter	&rhs);
{
	if(*this != src)
	{
		this._c = src.getC();
		this._n = src.getI();
		this._f = src.getF();
		this._d = src.getD();
	}
	return(*this);
}

char	ScalarConverter::getC(void) const
{
	return(this->_c);
}

int	ScalarConverter::getI(void) const
{
	return(this->_n);
}

float	ScalarConverter::getF(void) const
{
	return(this->_f);
}

double	ScalarConverter::getD(void) const
{
	return(this->_d);
}

std::string	ScalarConverter::getStr(void) const
{
	return(this->_str);
}

e_type	ScalarConverter::getType(void) const
{
	return(this->_type);
}

void	ScalarConverter::setC(char c)
{
	this->_c = c;
}

void	ScalarConverter::setI(int n)
{
	this->_n = n;
}

void	ScalarConverter::setF(float f)
{
	this->_f = f;
}

void	ScalarConverter::setD(double d)
{
	this->_d = d;
}

void	ScalarConverter::setStr(std::string str)
{
	this->_str = str;
}

bool	ScalarConverter::isChar(void) const
{
	return(_str.length() == 1 && std::isalpha(_str[0]))
}

bool	ScalarConverter::isInt(void) const
{
	int	i = 0;
	while(_str[i] == '+' || _str[i] == '-')
		i++;
	while(i < (int)_str.length())
	{
		if(!isdigit(_str[i]))
			return(0);
		else
			i++;
	}
	return(1);
}

bool	ScalarConverter::isFloat(void)
{
	std::istringstream	iss(_str);
	float	f;
	iss >> std::noskipws >> f;
	return(iss.eof() && !iss.fail());
}