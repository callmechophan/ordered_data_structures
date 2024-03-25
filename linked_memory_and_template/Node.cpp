#include "Node.h"

template <class T>
Node<T>::Node(const T& data) : data(data), next(nullptr) {};