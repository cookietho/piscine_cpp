#include <iostream>

template <class T>
void	iter(T *addr, int l, void (*f)(T))
{
	for (int i = 0; i < l; i++)
		f(addr[i]);
}

template <class T>
void	print(T c)
{
	std::cout<<c<<std::endl;
}

int		main()
{
	std::string	arr[] = {"This", "is", "an", "array", "of", "string!"};
	int			nb[] = {1, 2, 3, 4, 5};
	char		c[] = {'m', 'i', 'n', 'a'};
	float		f[] = {4.22, 2.19, 8.41, 16.8};

	iter(arr, 6, ::print);
	iter(nb, 5, ::print);
	iter(c, 4, ::print);
	iter(f, 4, ::print);
	return (0);
}
