#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
		typedef	std::stack<T>	base;

	public:
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(MutantStack const & rhs) : base(rhs) {};
		typedef typename base::container_type::iterator iterator;
		using	base::operator=;

		iterator	begin() {return (base::c.begin());};
		iterator	end() {return (base::c.end());};
};
#endif
