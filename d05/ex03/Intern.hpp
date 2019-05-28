#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(Intern const & copy);
		~Intern();
		Intern & operator=( Intern const &);

		Form*	makeForm(std::string form, std::string target);
};
#endif
