#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <list>
#include <vector>

template <typename T>
int	easyfind(T &x, int y)
{
	typename T::iterator it = std::find(x.begin(), x.end(), y);
	if (it != x.end())
		return *it;
	throw std::logic_error("No match");
}
#endif
