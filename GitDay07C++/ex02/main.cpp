#include "Array.hpp"

int main(void)
{
	srand(time(0));
	std::cout << "Empty array:" << std::endl;
	Array<int> a = Array <int> ();
	for (unsigned int i = 0; i < a.getSize(); i++)
		std::cout << a[i] << std::endl;


	std::cout << "Array of 7 elements:" << std::endl;
	a = Array <int> (7);
	for (unsigned int i = 0; i < a.getSize(); i++)
		std::cout << a[i] << std::endl;


	std::cout << "Fill an array: " << std::endl;
	for (unsigned int i = 0; i < a.getSize(); i++)
	{
		a[i] = rand() % 20;
		std::cout << a[i] << std::endl;
	}
	try
	{
		std::cout << "Array of 6 elements:" << std::endl;
		std::cout << a[6] << std::endl;
		std::cout << "Array of 7 elements:" << std::endl;
		std::cout << a[7] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "Copy array:" << std::endl;
	Array<int> new_array = Array<int>(a);
	for (unsigned int i = 0; i < new_array.getSize(); i++)
		std::cout << new_array[i] << std::endl;


	std::cout << "Array a:" << std::endl;
	for (unsigned int i = 0; i < a.getSize(); i++)
		std::cout << a[i] << std::endl;
	std::cout << "Change second element of new_array:" << std::endl;
	new_array[2] = 100;
	std::cout << "Second element of new_array array after changing: " << new_array[2] << std::endl;
	std::cout << "Second element of a array after changing: " << a[2] << std::endl;

	std::cout << "Assignment array: " << std::endl;
	Array <int> j = Array <int> ();
	j = new_array;
	for (unsigned int i = 0; i < j.getSize(); i++)
		std::cout << j[i] << std::endl;

	std::cout << "Array new_array:" << std::endl;
	for (unsigned int i = 0; i < new_array.getSize(); i++)
		std::cout << new_array[i] << std::endl;
	std::cout << "Change second element of j:" << std::endl;
	j[2] = 55;
	std::cout << "Second element of j array after changing: " << j[2] << std::endl;
	std::cout << "Second element of new_array after changing: " << new_array[2] << std::endl;
	// Array<std::string> str = Array<std::string> ();
	// std::cout << "Empty array:" << std::endl;
	// for (unsigned int i = 0; i < str.getSize(); i++)
	// 	std::cout << str[i] << std::endl;
	// str = Array<std::string>(3);
	// for (unsigned int i = 0; i < str.getSize(); i++)
	// 	std::cout << str[i] << std::endl;
	// std::cout << "Fill an array: " << std::endl;
	// str[0] = "aaa";
	// str[1] = "bbb";
	// str[2] = "ccc";
	// for (unsigned int i = 0; i < str.getSize(); i++)
	// 	std::cout << str[i] << std::endl;
	// std::cout << "Copy array:" << std::endl;
	// Array<std::string> str2 = Array<std::string>(str);
	// for (unsigned int i = 0; i < str2.getSize(); i++)
	// 	std::cout << str2[i] << std::endl;
	// std::cout << "Change second element of str2:" << std::endl;
	// str2[2] = "zzzzzzz";
	// std::cout << "Second element of str2 array after changing: " << str2[2] << std::endl;
	// std::cout << "Second element of str array after changing: " << str[2] << std::endl;
	return 0;
}