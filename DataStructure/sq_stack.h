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
		bool push(const T x);//修订20171023：不该传地址 应生成x的拷贝 防止多重修改
		bool pop(T& x);
		bool get_top(T& x);
		size_t length()const;
	};
}