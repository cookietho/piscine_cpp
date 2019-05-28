#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);
		ShrubberyCreationForm & operator =(ShrubberyCreationForm const & copy);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
} ;
#endif
