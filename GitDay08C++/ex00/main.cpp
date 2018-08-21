#include "easyfind.hpp"

int main(void)
{
	srand(time(0));
	std::vector<int> v;
	int random;

	std::cout << "Fill a container (vector): " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << (random = rand() % 7) << std::endl;
		v.push_back(random);
	}

	std::cout << "Search a value: " << std::endl;
	for (int i = 0; i < 5; i++)
		easyfind(v, rand() % 7);
	std::list<int> list;

	std::cout << "Fill a container (list): " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << (random = rand() % 15) << std::endl;
		list.push_back(random);
	}
	std::cout << "Search a value: " << std::endl;
	for (int i = 0; i < 5; i++)
		easyfind(list, rand() % 15);
	return 0;
}
