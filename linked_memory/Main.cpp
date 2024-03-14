/**
 * linked memory
 * - stores data together with a "link" to the location (address memory) of the next list node
 * 
 * list nodes
 * a list node refers to pair of both the data and the link
 * 
 * linked list
 * - 0 or more "list node" elements linked together form a "linked list"
 * - a pointer called the "head pointer" store the link to the beginning of the list
 * - a pointer to nullptr marks the end of the list
*/

#include "ListNode.h"

int main()
{
    ListNode *list = new ListNode();
    
    list->Add(3);
    list->Add(5);
    list->PushBack(4);

    list->Print();

    return 0;
};
