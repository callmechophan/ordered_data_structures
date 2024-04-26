#include <iostream>
#include <vector>

int main() {
    std::vector vectors = {2, 3, 5, 7, 11, 13, 15, 17, 21, 23};

    // access the 2nd in vector
    std::cout << vectors[1] << std::endl;

    std::cout << vectors.size() << std::endl;
    std::cout << vectors.capacity() << std::endl;

    // add to vector
    vectors.push_back(25);
    std::cout << vectors.size() << std::endl;
    std::cout << vectors.capacity() << std::endl;

    // iterate over a vector
    for (const auto &i : vectors) {
        std::cout << i << std::endl;
    };

    for (const int& i : vectors) {
        std::cout << i << std::endl;
    };

    for (unsigned int i = 0; i < vectors.size(); ++i) {
        std::cout << vectors[i] << std::endl;
    };

    return 0;
};