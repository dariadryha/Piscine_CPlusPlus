#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>
#include <map>
#include <cmath>

template <typename T>
void easyfind(T &a, int const &b)
{
	typename T::iterator it;

	try
	{
		it = find (a.begin(), a.end(), b);
		if (it == a.end())
			throw(std::range_error("Element " + std::to_string(b) + " not found in container\n"));
		std::cout << "Element found in container: " << *it++ << '\n';
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}

#endif
