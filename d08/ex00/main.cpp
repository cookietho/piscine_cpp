#include "easyfind.hpp"

int	main(void)
{
	std::list<int> lst;

	lst.push_back(4);
	lst.push_back(14);
	lst.push_back(26);
	lst.push_back(18);
	lst.push_back(42);

	try
	{
		std::cout<<easyfind(lst, 18)<<std::endl;
	}
	catch (std::logic_error e)
	{
		std::cout<<e.what()<<std::endl;
	}

	try
	{
		std::cout<<easyfind(lst, 5)<<std::endl;
	}
	catch (std::logic_error e)
	{
		std::cout<<e.what()<<std::endl;
	}
	return (0);
}
