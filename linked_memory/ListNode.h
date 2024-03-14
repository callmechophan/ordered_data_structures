#pragma once
#include "Node.h"

class ListNode
{
    public:
        ListNode();

        void Add(const int &data);
        void PushBack(const int &data);
        void Print();

    private:
        Node *head; // head pointer
};
