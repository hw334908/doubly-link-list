#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <cstdlib>
#include "Dnode.h"


using namespace std;


template <class T>
class List{
  public:
	  List()
	  {head = NULL; tail = NULL;}

	  void front_insert(const T& d);
	  void rear_insert(const T& d);
	  void front_remove();
	  void rear_remove();
	  T get_head_data();
	  T get_tail_data();

  private:
	  Dnode<T> * head;
	  Dnode<T> * tail;
};

#endif
