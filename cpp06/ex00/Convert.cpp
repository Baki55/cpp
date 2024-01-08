/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:29:25 by bkhatib           #+#    #+#             */
/*   Updated: 2024/01/08 20:17:46 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

ScalarConverter::ScalarConverter(void)
{
	_c = '\0';
	_n = 0;
	_f = 0.0f;
	_d = 0.0;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter(void)
{}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter	&rhs)
{
	if(this != &rhs)
	{
		this->_c = rhs.getC();
		this->_n = rhs.getI();
		this->_f = rhs.getF();
		this->_d = rhs.getD();
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
	return(_str.length() == 1 && std::isalpha(_str[0]));
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

bool	ScalarConverter::isFloat(void) const
{
	if(_str.find( '.' ) == std::string::npos || _str.back() != 'f' || _str.find( '.' ) == 0 || _str.find( '.' ) == _str.length() - 2)
		return(0);
	int	found = 0;
	int	i = 0;
	while(_str[i] == '-' || _str[i] == '+')
		i++;
	while(i < (int)_str.length() - 1)
	{
		if(_str[i] == '.')
			found++;
		if((!std::isdigit(_str[i]) && _str[i] != '.' ) || found > 1)
			return(0);
		i++;
	}
	return(1);
}

bool	ScalarConverter::isDouble( void ) const
{
	if(_str.find( '.' ) == std::string::npos || _str.find( '.' ) == 0 || _str.find( '.' ) == _str.length() - 1)
		return(0);
	int	found = 0;
	int	i = 0;
	while(_str[i] == '-' || _str[i] == '+')
		i++;
	while(i < (int)_str.length())
	{
		if(_str[i] == '.')
			found++;
		if((!std::isdigit(_str[i]) && _str[i] != '.' ) || found > 1)
			return(0);
		i++;
	}
	return(1);
}

bool	ScalarConverter::isImpossible(void)
{
	try
	{
		if (_type == INT)
			_n = std::stoi(_str);
		else if(_type == FLOAT)
			_f = std::stof(_str);
		else if (_type == DOUBLE)
			_d = std::stod(_str);
	}
	catch (std::exception &e)
	{
		_impossible = 1;
		return(1);
	}
	return(0);
}

bool	ScalarConverter::isPseudoLiterals( void ) const
{
	if((_impossible) || (_str.compare( "nan" ) == 0) || (_str.compare( "nanf" ) == 0)
		|| ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) 
		|| ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 ) 
		|| ( _str.compare( "-inff" ) == 0 ) || ( _str.compare( "-inff" ) == 0 )  
		|| ( _str.compare( "+inff" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) )
			return(1);
	return(0);
}


void	ScalarConverter::setType(void)
{
	if(isChar())
		_type = CHAR;
	else if(isInt())
		_type = INT;
	else if(isFloat())
		_type = FLOAT;
	else if(isDouble())
		_type = DOUBLE;
	else if(isPseudoLiterals())
		_type = PSEUDOLITERALS;
	else
		_type = NONE;
}

void	ScalarConverter::convert(std::string str)
{
	this->setStr(str);
	this->setType();
	if(isImpossible())
		return;
	switch(_type)
	{
		case CHAR:
			_c = _str[0];
			_n = static_cast< int >( _c );
			_f = static_cast< float >( _c );
			_d = static_cast< double >( _c );
			break;
		case INT:
			_n = std::stoi( _str );
			_f = static_cast< float >( _n );
			_d = static_cast< double >( _n );
			_c = static_cast< char >( _n );
			break;
		case FLOAT:
			_f = std::stof( _str );
			_n = static_cast< int >( _f );
			_d = static_cast< double >( _f );
			_c = static_cast< char >( _f );
			break;
		case DOUBLE:
			_d = std::stod( _str );
			_n = static_cast< int >( _d );
			_f = static_cast< float >( _d );
			_c = static_cast< char >( _d );
			break;
		default:
			break;
	}
}

void	ScalarConverter::printChar(void) const
{
	if ((!std::isprint(_n) && (_n >= 127)) || _str.compare( "nan" ) == 0)
		std::cout << "impossible";
	else if(!std::isprint(this->_n))
		std::cout << "Non displayable";
	else
		std::cout << "'" << getC() << "'";
	std::cout << std::endl;
}

void	ScalarConverter::printInt( void ) const
{
	if(this->isPseudoLiterals() || (!std::isprint(_n) && (_n >= 127 )))
		std::cout << "impossible";
	else
		std::cout << getI();
	std::cout << std::endl;
}


void	ScalarConverter::printFloat( void ) const
{
	if(_str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0)
		std::cout << "nanf";
	else if(_str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0)
		std::cout << "+inff";
	else if(_str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0)
		std::cout << "-inff";
	else if ( _impossible )
		std::cout << "impossible";
	else
	{
		if(_f - static_cast< int > ( _f ) == 0)
			std::cout << _f << ".0f";
		else
			std::cout << getF() << "f";
	}
	std::cout << std::endl;
}

void	ScalarConverter::printDouble(void) const
{
	if(_str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0)
		std::cout << "nan";
	else if(_str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0)
		std::cout << "+inf";
	else if(_str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0)
		std::cout << "-inf";
	else if(_impossible)
		std::cout << "impossible";
	else
	{
		if(_d - static_cast< int > ( _d ) == 0)
			std::cout << _d << ".0";
		else
			std::cout << getD() << "f";
	}
	std::cout << std::endl;
}

std::ostream	&operator<<( std::ostream& out, const ScalarConverter& rhs )
{
	out << "char: "; rhs.printChar();
	out << "int: "; rhs.printInt();
	out << "float: "; rhs.printFloat();
	out << "double: "; rhs.printDouble();
	return out;
}