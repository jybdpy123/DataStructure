#include "sq_stack.h"

namespace jyb
{
	template <class T>
	sq_stack<T>::sq_stack(const size_t maxsize)
	{
		this->max_size = maxsize;
		this->data = new T[maxsize];
		this->top = 0;
	}

	template <class T>
	bool sq_stack<T>::is_empty() const
	{
		return top == 0;//栈顶指针从0计算 入栈时先入栈 再自增
	}

	template <class T>
	bool sq_stack<T>::is_full() const
	{
		return top == max_size - 1;//指向最后一个位置时 栈满
	}

	template <class T>
	bool sq_stack<T>::push(const T x)
	{
		if (is_full())return false;
		data[top++] = x;
		return true;
	}

	template <class T>
	bool sq_stack<T>::pop(T& x)
	{
		if (is_empty())return false;
		x = data[top--];
		return true;
	}

	template <class T>
	bool sq_stack<T>::get_top(T& x)
	{
		if (is_empty())return false;
		x = data[top];
		return true;
	}

	template <class T>
	size_t sq_stack<T>::length() const
	{
		return this->top;
	}
}
