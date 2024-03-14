#include "ListNode.h"
#include <iostream>

ListNode::ListNode():head(nullptr)
{};

void ListNode::Add(const int &data)
{
    // create a new node on the heap
    Node *node = new Node(data);

    if(head == nullptr)
    {
        head = node;
    }
    else
    {
        // set the new node next pointer point the head
        node->next = head;

        // set the list node head pointer to be the new node
        head = node;
    };
};

void ListNode::PushBack(const int &data)
{
    Node *node = new Node(data);

    if(head == nullptr)
    {
        head = node;
    }
    else
    {
        Node *last = head;

        while(last->next != nullptr)
        {
            last = last->next;
        };
        
        last->next = node;
    };
};

void ListNode::Print()
{
    Node *node = head;

    while(node != nullptr)
    {
        std::cout << node->data;
        
        if(node->next != nullptr)
        {
            std::cout << "->";
        };

        node = node->next;
    };
};
