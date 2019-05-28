#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	int	i = rand() % 3;

	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout<<"class A"<<std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout<<"class B"<<std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout<<"class C"<<std::endl;
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p) != NULL)
		std::cout << "class A" << std::endl;
	else if (dynamic_cast<B *>(&p) != NULL)
		std::cout << "class B" << std::endl;
	else if (dynamic_cast<C *>(&p) != NULL)
		std::cout << "class C" << std::endl;
}

int		main(void)
{
	Base	*base = generate();

	identify_from_pointer(base);
	identify_from_reference(*base);
	return (0);
}
