#include "span.hpp"

int main() 
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch (std::overflow_error e)
	{
		std::cout<<e.what()<<std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(10);
	try
	{
		for (int i = 0; i < 84; i++)
		{
			sp2.addNumber(i * 10);
		}
	}
	catch (std::overflow_error e)
	{
		{
			std::cout<<e.what()<<std::endl;
		}
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	return 0;
}
