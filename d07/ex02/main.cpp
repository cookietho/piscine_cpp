#include "Array.hpp"

int	main()
{
	unsigned int	n = 10;
	Array<int> arr = Array<int>(n);

	//for (int i = 0; i < 10; i++)
	//	arr[i] = i;
	//try
	//{
	//	for (int i = 0; i <= 10; i++)
	//		std::cout<<arr[i]<<std::endl;
	//}
	//catch (std::exception &e)
	//{
	//	std::cout<<e.what()<<std::endl;
	//}
	//std::cout<<"arr_size: "<<arr.size()<<std::endl;

	//Array<int> cpy = Array<int> (arr);
	//cpy[0] = 1000;
//	for (int i = 0; i < 10; i++)
//		std::cout<<cpy[i]<<std::endl;
//	
//	cpy = arr;
//	for (int i = 0; i < 10; i++)
//		std::cout<<cpy[i]<<std::endl;
//	std::cout<<"cpy_size: "<<arr.size()<<std::endl;
//
//	n = 5;
//	Array<char> c = Array<char>(n);
//	for (int i = 0; i < 5; i++)
//		c[i] = 'a' + i;
//	for (int i = 0; i < 5; i++)
//		std::cout<<c[i]<<std::endl;
//	std::cout<<"c_size: "<<c.size()<<std::endl;
	return(0);
}
