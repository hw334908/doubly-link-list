#ifndef DNODE_H
#define DNODE_H
#include <iostream>
#include <cstdlib>

using namespace std;
template <class T>
class Dnode{
  public:
	  Dnode(T d=T(), Dnode* N = NULL, Dnode* P = NULL)
	  {datafield  = d; next = N; previous = P;}

	  //accessor functions
	  T& data()
	  {return datafield;}

	  Dnode * next_link()
	  {return next;}

	  Dnode * prev_link()
	  {return previous;}

	  //Mutator Functions
	  void set_data(const T& d)
	  {datafield = d;}

	  void set_next(Dnode * n)
	  {next = n;}

	  void set_prev(Dnode * p)
	  {previous = p;}

  private:
	  T datafield;
	  Dnode* next;
	  Dnode* previous;
};

#endif
