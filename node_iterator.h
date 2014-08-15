//******************************************************************
//
//		Author: Hugh Williams
//		Title: Node Iterator Class
//		Description: This is class represents a bidirectional
//					 iterator. It is templated so it can be 
//					 used with any datatype.
//******************************************************************

#include "Dnode.h"
#include "List.h"

using namespace std;

template<class T>
class List;

template<class T>
class node_iterator{
//class List;
   public:
    friend class List<T>;
    
    //Constructor
    node_iterator(Dnode<T>* init =NULL)
    {currptr = init;}
    
    //Implement the * operator which retrieves the data the iterator is pointing to
    T operator *()
    {return currptr->get_data();}
    
    //Overloaded operator functions
    bool operator !=(const node_iterator & other)
    {return currptr != other.currptr;}
    
    bool operator ==(const node_iterator & other)
    {return currptr == other.currptr;}
    
    node_iterator operator ++()
    {currptr = currptr ->next_link(); return *this;}
    
    node_iterator operator ++(int)
    {node_iterator original(currptr); currptr = currptr -> next_link(); return original;}
    
    node_iterator operator --()
    {currptr = currptr ->prev_link(); return *this;}
    
    node_iterator operator --(int)
    {node_iterator original(currptr); currptr = currptr -> prev_link(); return original;}

  private:
    Dnode<T>*currptr; //node the iterator is pointing to
};

