#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);
		RobotomyRequestForm & operator =(RobotomyRequestForm const & copy);
		~RobotomyRequestForm();

		void execute(Bureaucrat const & executor) const;
} ;

#endif
