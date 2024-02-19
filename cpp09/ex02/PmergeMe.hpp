/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:57:07 by bkhatib           #+#    #+#             */
/*   Updated: 2024/02/19 10:57:10 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <ctime>

class PmergeMe
{
private:
	std::vector<int> container1;
	std::list<int> container2;

	void checkSequence(std::vector<std::string> sequence);
	void checkIsDigit(std::string number);
	template <typename Container>
	void insertionSort(Container &container);
	template <typename Container>
	void mergeInsertSort(Container& container);
	template <typename Container>
	void merge(Container& container, const Container& left, const Container& right);
	void displaySequence(std::vector<std::string> sequence, double time1, double time2);

public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(PmergeMe const &other);
	PmergeMe &operator=(PmergeMe const &other);
	void run(std::vector<std::string> sequence);
};

#endif