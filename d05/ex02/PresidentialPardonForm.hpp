#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & copy);
		PresidentialPardonForm & operator =(PresidentialPardonForm const & copy);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor) const;
} ;

#endif
