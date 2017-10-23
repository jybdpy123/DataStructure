#pragma once
namespace jyb
{
	/**
	 * \brief 利用数组构成的循环链表 使用缺一位的策略来判满
	 */
	template <class T>
	class sq_queue
	{
	public:
		T* data;
		size_t max_size;
		size_t rear;//队尾伪指针
		size_t front;//队首伪指针
		explicit sq_queue(size_t maxsize);
		bool is_empty()const;
		bool is_full()const;
		bool enqueue(const T x);
		bool dequeue(T& x);
		size_t length()const;
	};
}