#ifndef BASE_HPP
# define BASE_HPP
#include <iostream>
class	Base
{
	public:
		Base();
		Base(Base const & copy);
		Base & operator=(Base const & rhs);
		virtual ~Base();
};
#endif
