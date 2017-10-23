#pragma once
namespace jyb
{
	template <class T>
	struct binary_tree_node
	{
		T data;
		binary_tree_node *lchild, *rchild;
	};

	template<class T>
	class binary_tree
	{
	public:
		binary_tree_node<T> *root;
		binary_tree() { this->root = nullptr; }
	};
}