#include "sq_queue.h"

namespace jyb
{
	template <class T>
	sq_queue<T>::sq_queue(const size_t maxsize)
	{
		this->data = new T[maxsize];
		this->rear = 0;
		this->front = 0;
		this->max_size = maxsize;
	}

	template <class T>
	bool sq_queue<T>::is_empty()const
	{
		return this->front = this->rear;
	}

	template <class T>
	bool sq_queue<T>::is_full()const
	{
		return (this->rear + 1) % this->max_size == this->front;
	}

	template <class T>
	bool sq_queue<T>::enqueue(const T x)
	{
		if (is_full()) return false;
		this->data[this->rear] = x;
		this->rear = (this->rear + 1) % this->max_size;
		return true;
	}

	template <class T>
	bool sq_queue<T>::dequeue(T& x)
	{
		if (is_empty()) return false;
		x = this->data[this->front];
		this->front = (this->front + 1) % this->max_size;
		return true;
	}

	template <class T>
	size_t sq_queue<T>::length()const
	{
		return (this->rear - this->front + this->max_size) % this->max_size;
	}
}
