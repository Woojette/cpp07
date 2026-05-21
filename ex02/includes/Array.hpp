#ifndef ARRAY_HPP
# define  ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template	<typename T>
class	array
{
	private:
		T				_data;
		unsigned int	_size;
	public:
		Array();
		Array(const Array& other);
		~Array();
		Array& operator=(const Array& other);

		T&	operator[](unsigned int i);
		T&	operator[](unsigned int i) const;

		unsigned int	size() const;
};

#endif
