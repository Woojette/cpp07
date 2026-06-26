#ifndef ITER_HPP
# define	ITER_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T, typename F>
void	iter(T* array, const size_t len, F f)
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif
