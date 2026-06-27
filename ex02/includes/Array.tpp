template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{
	// std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n)
{
	// std::cout << "Array parametrized constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& other) : _data(NULL), _size(0)
{
	// std::cout << "Array constructor constructor called" << std::endl;
	*this = other;
}

template <typename T>
Array<T>::~Array()
{
	delete[]	_data;
	// std::cout << "Array destructor called" << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& other)
{
	// std::cout << "Array copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete[]	_data;
		this->_size = other._size;
		_data = new	T[_size]();
		for (unsigned int i = 0; i < this->_size; i++)
			this->_data[i] = other._data[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw	std::exception();
	return (this->_data[i]);
}

template <typename T>
const T&	Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw	std::exception();
	return (this->_data[i]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
  return (this->_size);
}
