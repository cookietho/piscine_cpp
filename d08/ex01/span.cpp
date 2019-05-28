#include "span.hpp"
#include <algorithm>
#include <numeric>

Span::Span() 
{
	_v.reserve(0);
}

Span::Span(unsigned int n) 
{
	_v.reserve(n);
}

Span::Span(Span const & copy) 
{
	*this = copy;
}

Span::~Span() {}

Span & Span::operator=(Span const & rhs) 
{
	this->_v = rhs._v;
	return (*this);
}

void	Span::addNumber(int n) 
{
	if (this->_v.size() < this->_v.capacity())
		this->_v.push_back(n);
	else
		throw std::overflow_error("Error: FULL");
}

int		Span::shortestSpan() 
{
	std::vector<int>	tmp = _v;

	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin() - 1);
	tmp.pop_back();
	return (tmp[std::distance(tmp.begin(), std::min_element(tmp.begin(), tmp.end()))]);
}

int		Span::longestSpan() 
{
	std::vector<int>::iterator	min = std::min_element(_v.begin(), _v.end());
	std::vector<int>::iterator	max = std::max_element(_v.begin(), _v.end());
	return (_v[std::distance(_v.begin(), max)] - _v[std::distance(_v.begin(), min)]);
}
