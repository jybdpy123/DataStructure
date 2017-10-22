#include "sq_list.h"

namespace jyb
{
	template <class T>
	sq_list<T>::sq_list(size_t maxsize)
	{
		this->max_size = maxsize;
		this->data = new T[maxsize];
	}

	template <class T>
	size_t sq_list<T>::length()
	{
		return 0;
	}

	template <class T>
	T sq_list<T>::research(size_t)
	{
		return NULL;
	}

	template <class T>
	size_t sq_list<T>::location(const T& x)
	{
		return 0;
	}
}
