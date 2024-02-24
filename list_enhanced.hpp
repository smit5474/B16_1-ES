
#ifndef __list_enhanced__
#define __list_enhanced__

#include "list.hpp"
#include <iostream>

template <typename T> void list_delete_after(Node<T> *node)
{   
        node -> next = NULL;

        // tried this but didnt work? why is that???
        //node* temp;
        //temp = node->next;
        //node->next = temp->next;
        //delete temp;
};

#endif // __list_enhanced__
