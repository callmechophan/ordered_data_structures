/**
 * array
 * - an array stores data in "block of sequential memory"
 * 
 * array limitation #1
 * - all data in an array must be of the same type
 * 
 * array limitation #2
 * - arrays have fixed "capacity"
 * - the "capacity" is the maximum number of elements that can be stored
 * - the "size" is the current number of element stored in the array
*/

#include <iostream>

int main() {
    // create a fixed-sized array
    int arrays[10] = {2, 3, 5, 7, 11, 13, 15, 17, 21, 23};

    // access the 1st in array
    std::cout << arrays[0] << std::endl;

    // print the size of each type "int"
    std::cout << sizeof(int) << std::endl; // 4 or 8 bytes

    return 0;
};
