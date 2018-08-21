#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <exception>
#include <iterator>
#include <map>
#include <cmath>
#include <numeric>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>() : std::stack<T>() {}
		MutantStack<T>(const MutantStack& other) { *this = other; }
		MutantStack<T>& operator = (const MutantStack& other)
		{
			static_cast <void> (other);
			return *this;
		}
		~MutantStack() {}
		class iterator : std::iterator<std::input_iterator_tag, int>
		{
			public:
				iterator() : std::iterator<std::input_iterator_tag, T>() {};
				iterator(int* ptr) : _ptr(ptr) {};
				iterator(const iterator &other) : _ptr(other._ptr) {}
				~iterator() {}
				iterator& operator++()	{ ++_ptr; return *this; }
				iterator& operator--() {--_ptr; return *this; }
				iterator operator++(int) { iterator tmp(*this); operator++(); return tmp;}
				iterator operator--(int) { iterator tmp(*this); operator--(); return tmp; }
				bool operator==(const iterator& other) const {return _ptr==other._ptr;}
	        	bool operator!=(const iterator& other) const {return _ptr!=other._ptr;}
	        	int& operator*() {return *_ptr;}
				int* _ptr;
		};
		MutantStack<T>::iterator begin() 
		{ 
			T* st = &(this->top());
			st -= this->size() - 1;
			iterator it;
			it._ptr = st;
			return (it);
		}
		MutantStack<T>::iterator end() 
		{
			T *end = &(this->top()) + 1;
			iterator it;
			it._ptr = end;
			return it;

		}
};

#endif
