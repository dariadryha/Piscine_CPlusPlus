#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdlib.h>
#include <stdexcept>
#include <iostream>

template <class T>
class Array {
	public:
		Array<T>() : _array(NULL), _size(0) {};
		Array<T>(unsigned int const & size) : _size(size)
		{
			this->_array = new T[size];
		}
		Array<T>(const Array<T>& other)
		{
			this->_size = other._size;
			this->_array = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
			{
				this->_array[i] = other._array[i];
			}
		}
		Array<T>& operator = (const Array<T>& other)
		{
			this->_size = other._size;
			if (this->_array)
				delete[] this->_array;
			this->_array = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
				this->_array[i] = other._array[i];
			return *this;
		}
		T& operator[] (const unsigned int index)
		{
			if (index < 0 || index > this->_size - 1)
				throw(std::range_error("Index doesn't exist!"));
			return this->_array[index];
		}
		~Array<T>()
		{
			delete[] this->_array;
		}
		unsigned int const & getSize() { return this->_size; }
	private:
		T* _array;
		unsigned int _size;
};

#endif
