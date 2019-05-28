#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <iostream>
#include <stdexcept>

class	Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &);
		Span & operator=(Span const &);
		~Span();
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

	private:
		std::vector<int>	_v;
};
#endif
