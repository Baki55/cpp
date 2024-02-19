/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:43:12 by bkhatib           #+#    #+#             */
/*   Updated: 2024/02/19 10:48:09 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
private:
	std::map <std::string, double> data;
	std::string db_name;
public:
	BitcoinExchange();
	BitcoinExchange(std::string name);
	~BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange& operator=(BitcoinExchange const &other);
	void read_csv();
	void evaluate(std::string date, std::string value);
};

#endif