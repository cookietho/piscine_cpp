#include "Base.hpp"

Base::Base()
{
	return ;
}

Base::Base(Base const & copy)
{
	*this = copy;
}

Base & Base::operator=(Base const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Base::~Base()
{
	return ;
}
