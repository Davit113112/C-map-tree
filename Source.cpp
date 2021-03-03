#include <iostream>
#include <time.h>
using namespace std;

template <typename T>
class map
{
public:
	map();
	~map();
	void rigt_left(T index);
	 public:
		template <typename T>
		class Node
		{
		public:
			Node* left;
			Node* right;
			T date;
			Node()
			{
				right = nullptr;
				left = nullptr;

			}
			Node(T elem)
			{
			date = elem;
			}
		};
		int size = 0;
		Node<T>* root;
};

template<typename T>
map<T>::map()
{

}

template<typename T>
map<T>::~map()
{


}
template<typename T>
void map<T>::rigt_left(T index)
{
	if (size == 0)
	{
		Node<T>* tmp =  new Node<T>(index);
		tmp->date = index;
	    root = tmp;
		return;
	}
	Node<T>* cur = root;
	while (cur != nullptr)
	{
		if (cur->date < index)
		{
			if (cur->left == nullptr)
			{
				cur->left = new Node<T>(index);
			}
			cur = cur->left;
		}
		if (cur->date > index)
		{
			if (cur->right == nullptr)
			{
				cur->right = new Node<T>(index);
			}
			cur = cur->right;
		}		
	}
};
int main()
{
	map<int> lst;
	 lst.rigt_left(15);
	 lst.rigt_left(17);
	 lst.rigt_left(20);
	 lst.rigt_left(27);
	 lst.rigt_left(3);
	 lst.rigt_left(5);
	return 0;
}
