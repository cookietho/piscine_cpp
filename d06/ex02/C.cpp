#include "C.hpp"

C::C()
{
}

C::C(C const & copy)
{
	*this = copy;
}

C & C::operator=(C const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

C::~C()
{
}
