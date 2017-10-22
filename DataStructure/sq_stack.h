#pragma once
namespace jyb
{
	/**
	 * \brief 顺序栈的类定义
	 */
	template <class T>
	class sq_stack
	{
	public:
		T* data;
		size_t max_size;
		size_t top;
		explicit sq_stack(const size_t maxsize);
		bool is_empty() const;
		bool is_full() const;
		bool push(const T& x);
		bool pop(T& x);
		bool get_top(T& x);
	};
}