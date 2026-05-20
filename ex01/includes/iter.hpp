#ifndef ITER_HPP
# define	ITER_HPP

# include <iostream>
# include <string>
# include <exception>

template	<typename T>
void	iter(T* array, const size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template	<typename T>
void	iter(const T* array, const size_t len, void (*f)(const T&))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif
