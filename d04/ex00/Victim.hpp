#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>

class	Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		~Victim(void);
		Victim(Victim const &copy);
		Victim & operator=(Victim const &copy);
		std::string	getName() const;
		void	getPolymorphed() const;

		protected:
			std::string	_name;
};

std::ostream & operator << (std::ostream & out, Victim const & v);
#endif
