/**
 * queue
 * - a queue is a firt-in first-out (FIFO) data structure that is similar to waiting in a line or "queue"
 * 
 * abstract data type
 * - a structure ADT is how data interact with the structure
 * - is "not" an "implementation", it is a "description"
 * 
 * queue ADT
 * - create
 * - push
 * - pop
 * - empty
*/

#include <iostream>
#include <queue>

int main()
{
    // create
    std::queue<std::string> q;

    // push
    q.push("Orange");
    q.push("Blue");
    q.push("Red");

    // front
    std::cout << q.front() << std::endl;

    // pop
    q.pop();

    q.push("Purple");

    std::cout << q.front() << std::endl;

    return 0;
};