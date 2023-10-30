/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:24:10 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/29 19:31:18 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <fstream>
#include <limits>

enum e_type
{
	NONE,
	INT,
	FLOAT,
	CHAR,
	DOUBLE,
	LITERALS
};

class ScalarConverter
{

private:
	char	_c;
	int		_n;
	float	_f;
	double	_d;

	bool	_impossible;

	std::string	_str;
	e_type		_type;

public:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter	&src);
	~ScalarConverter(void);

	ScalarConverter& operator=(const ScalarConverter	&rhs);

	char	getC(void) const;
	int		getI(void) const;
	float	getF(void) const;
	double	getD(void) const;
	std::string	getStr(void) const;
	e_type	getType(void) const;

	void	setC( char c );
	void	setI( int n );
	void	setF( float f );
	void	setD( double d );
	void	setStr( std::string str );
	void	setType( void );

	bool	isChar( void ) const;
	bool	isInt( void ) const;
	bool	isFloat( void ) const;
	bool	isDouble( void ) const;
	bool	isImpossible( void );
	bool	isLiterals( void ) const;

	void	printChar( void ) const ;
	void	printInt( void ) const ;
	void	printFloat( void ) const ;
	void	printDouble( void ) const ;

	void	convert( void );

	class ScalarConverterException : public std::exception
	{
		virtual const char* what() const throw() { return "Unknown type"; }
	};
};

std::ostream& operator<<( std::ostream& out, const ScalarConverter& rhs );

#endif // CONVERTER_HPP