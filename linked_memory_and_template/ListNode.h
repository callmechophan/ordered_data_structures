#ifndef LIST_NODE_H
#define LIST_NODE_H

#pragma once

#include "Node.h"

template <class T>
class ListNode
{
    public:
        ListNode();
        
        void Add(const T& data);
        void PushBack(const T& data);
        void Print();
    
    private:
        Node<T>* head; // head pointer
};

#include "ListNode.cpp"

#endif