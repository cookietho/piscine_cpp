#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <stdexcept>

template <typename T>
class	Array
{
	public:
		Array<T>() : _arr(NULL), _l(0) {};

		Array<T>(unsigned int n) : _l(n) {
			if (_l == 0)
				_arr = NULL;
			else
				_arr = new T[n];
		};

		Array<T>(Array<T> const & copy): _arr(NULL), _l(0) {
			*this = copy;
		};

		~Array<T>() {};

		Array & operator=(Array<T> const & rhs) {
			this->_l = rhs._l;
			this->_arr = new T[this->_l];
			for (unsigned int i = 0; i < this->_l; i++)
				this->_arr[i] = (rhs._arr[i]);
			return (*this);
		};

		T &		operator[](unsigned int n) {
			if (n >= _l)
				throw std::exception();
			return(_arr[n]);
		};

		unsigned int	size() {
			return (this->_l);
		};

	private:
		T*				_arr;
		unsigned int	_l;
};

#endif
