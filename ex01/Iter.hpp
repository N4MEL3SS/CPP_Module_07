#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T const *array, int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
		(*f)(array[i]);
}

template <typename T>
void printValues(T const &value)
{
	std::cout << value << " ";
}

#endif //ITER_HPP
