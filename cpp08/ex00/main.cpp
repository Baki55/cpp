#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> v;
	for (size_t i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	try
	{
		std::cout << "Value " << *easyfind(v, 3) << " found" << std::endl;
		std::cout << *easyfind(v, 6) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}