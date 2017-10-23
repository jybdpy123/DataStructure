#pragma once
namespace jyb
{
	/**
	 * \brief �������鹹�ɵ�ѭ������ ʹ��ȱһλ�Ĳ���������
	 */
	template <class T>
	class sq_queue
	{
	public:
		T* data;
		size_t max_size;
		size_t rear;//��βαָ��
		size_t front;//����αָ��
		explicit sq_queue(size_t maxsize);
		bool is_empty()const;
		bool is_full()const;
		bool enqueue(const T x);
		bool dequeue(T& x);
		size_t length()const;
	};
}