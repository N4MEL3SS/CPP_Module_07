#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <ostream>
#include <iostream>

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array const &toCopy);

	~Array();

	Array &operator = (Array const &toCopy);
	T &operator [] (const int &i) const;

	int size() const;

	class IndexOutOfBounds : public std::exception
	{
	public:
		const char* what() const throw();
	};

private:
	unsigned int _size;
	T *_arr;
};

template <typename T>
Array<T>::Array()
{
	this->_size = 0;
	this->_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->_arr = new T[this->_size];
}

template <typename T>
Array<T>::Array(Array const &toCopy)
{
	this->_size = toCopy._size;
	this->_arr = new T[this->_size];

	for (unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] = toCopy._arr[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_arr;
}

template <typename T>
Array<T> &Array <T>::operator = (const Array &toCopy)
{
	delete [] this->_arr;

	if (toCopy.size() != 0)
	{
		this->_size = toCopy.size();
		this->_arr = new T[this->_size];

		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = toCopy[i];
	}

	return *this;
}

template <typename T>
T &Array<T>::operator [] (const int &i) const
{
	if (i < 0 || i >= static_cast<int>(this->_size))
		throw IndexOutOfBounds();

	return this->_arr[i];
}

template <typename T>
int Array<T>::size() const
{
	return this->_size;
}

template <typename T>
const char *Array<T>::IndexOutOfBounds::what() const throw()
{
	return "Index out of bounds";
}

#endif //ARRAY_HPP
