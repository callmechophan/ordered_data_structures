#include "ListNode.h"
#include <iostream>

template <class T>
ListNode<T>::ListNode() : head(nullptr) {};

template <class T>
void ListNode<T>::Add(const T& data)
{
    // create a new node on the heap
    Node<T>* node = new Node<T>(data);

    if (head == nullptr)
    {
        head = node;
    }
    else
    {
        // set the new node next pointer point the head
        node->next = head;

        // set the list node head pointer to be the new node
        head = node;
    }

    delete node;
};

template <class T>
void ListNode<T>::PushBack(const T& data)
{
    Node<T>* node = new Node<T>(data);

    if (head == nullptr)
    {
        head = node;
    }
    else
    {
        Node<T>* last = head;
        while (last->next != nullptr)
        {
            last = last->next;
        }

        last->next = node;
    };

    delete node;
};

template <class T>
void ListNode<T>::Print()
{
    Node<T>* node = head;

    while (node != nullptr)
    {
        std::cout << node->data;

        if (node->next != nullptr)
        {
            std::cout << "->";
        }

        node = node->next;
    }
};