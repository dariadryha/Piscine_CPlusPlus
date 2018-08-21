#include "span.hpp"

int main(void)
{
	srand(time(NULL));
	Span sp = Span(5);
	Span new_span = Span(2000);
	std::vector<int> sp1;
	int random;

	sp.addNumber(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(21);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 1000; i++)
	{
		random = rand() % 10000;
		sp1.push_back(random);
	}
	try
	{
		std::cout << new_span.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		new_span.addNumber(sp1);
		new_span.addNumber(sp1);
		new_span.addNumber(sp1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << new_span.shortestSpan() << std::endl;
		std::cout << new_span.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
