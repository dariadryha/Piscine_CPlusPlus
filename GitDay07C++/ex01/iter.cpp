#include <iostream>
#include <string>

template <typename T>
void Print(T& a)
{
	std::cout << a << std::endl;
}

template< typename T1, typename T2>
void Iter(T1 *array, T2 length, void (*Print)(T1 &))
{
	for (T2 i = 0; i < length; i++)
		Print(array[i]);
}

int main( void ) 
{
	char mas[] = {'a', 'b', 'c'};
	int mas1[3] = {6, 78, 100};
	double mas2[] = {4.56, 3.01, 89.45};
	std::string mas3[] = {"Hello", "World", "Byyyye"};
	std::cout << "Array of char: " << std::endl;
	Iter(mas, 3, &Print);
	std::cout << "Array of int: " << std::endl;
	Iter(mas1, 3, &Print);
	std::cout << "Array of double: " << std::endl;
	Iter(mas2, 3, &Print);
	std::cout << "Array of string: " << std::endl;
	Iter(mas3, 3, &Print);
	return 0; 
}
