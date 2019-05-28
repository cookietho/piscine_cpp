#include "B.hpp"

B::B()
{
}

B::B(B const & copy)
{
	*this = copy;
}

B & B::operator=(B const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

B::~B()
{
}
