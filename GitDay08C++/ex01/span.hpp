#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>
#include <iterator>
#include <map>
#include <cmath>
#include <numeric>

class Span {
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator = (const Span& other);
		~Span();
		void addNumber(int x);
		void addNumber(std::vector<int> second);
		void checkSize();
		int shortestSpan();
		int longestSpan();
	private:
		std::vector<int> _vector;
		unsigned int _n;
};

#endif
