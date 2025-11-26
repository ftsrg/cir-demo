/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cstddef>
#include <vector>

class A {
  public:
    A();
};

template<class T>
class list {
public:

	struct node {
		T data;
		node* prev;
		node* next;
		node(T t, node* p, node* n) :
				data(t), prev(p), next(n) {
		}
	};
	int _size;

	class iterator {
	public:
		node* it;
        int it_size;

		bool operator ==(const iterator& x) const{
			if(this->it->data != x.it->data) //ERRO
				return false; //ERRO
			return true;
		}
	};
};

int main ()
{
  list<A> mylist;

  return 0;
}
