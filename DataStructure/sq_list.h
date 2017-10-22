#pragma once
#include <stdio.h>

namespace jyb
{
	template <class T>
	class sq_list
	{
	public:
		T * data;
		size_t max_size;
		explicit sq_list(size_t maxsize);
		size_t length();
		T research(size_t);
		size_t location(const T& x);

	};
}
