#include "span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) 
{
	this->_vector.reserve(n);
}

void Span::addNumber(int x)
{
	try
	{
		if (this->_vector.size() == this->_n)
			throw(std::range_error("The container already contains " + std::to_string(this->_n) + " items!"));
		this->_vector.push_back(x);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Span::addNumber(std::vector<int> second)
{
	try
	{
		if (this->_vector.size() + second.size() > this->_n)
			throw(std::range_error("The container already contains " + std::to_string(this->_n) + " items!"));
		this->_vector.insert(this->_vector.end(), second.begin(), second.end());
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Span::Span(const Span& other)
{
	*this = other;
}

Span& Span::operator = (const Span& other)
{
	if (this != &other)
	{
		this->_n = other._n;
		this->_vector = other._vector;
	}
	return *this;
}

void Span::checkSize()
{
	if (!this->_vector.size())
		throw(std::range_error("The container is empty!"));
	if (this->_vector.size() == 1)
		throw(std::range_error("The container has only one value!"));
}

int Span::shortestSpan()
{

	checkSize();
	std::sort(this->_vector.begin(), this->_vector.end());
	return (*(this->_vector.begin() + 1) - *(this->_vector.begin()));
}

int Span::longestSpan()
{
	checkSize();
	std::vector<int>::iterator result = std::max_element(this->_vector.begin(), this->_vector.end());
	std::vector<int>::iterator result1 = std::min_element(this->_vector.begin(), this->_vector.end());
	return (*result - *result1);
}

Span::~Span() {}
