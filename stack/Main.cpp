/**
 * stack
 * - a stack is a last-in first-out (LIFO) data structure that is similar to a pile ("stack") of paper 
 * 
 * stack ADT
 * - create
 * - push
 * - pop
 * - empty
*/

#include <iostream>
#include <stack>

int main()
{
    // create
    std::stack<std::string> s;

    // push
    s.push("Orange");
    s.push("Blue");
    s.push("Red");

    // front
    std::cout << s.top() << std::endl;

    // pop
    s.pop();

    s.push("Purple");

    std::cout << s.top() << std::endl;

    return 0;
};