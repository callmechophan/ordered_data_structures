#ifndef NODE_H
#define NODE_H

#pragma once

template <class T>
class Node
{
    public:
        Node(const T& data);

        const T& data;
        Node<T>* next;
};

#include "Node.cpp"

#endif