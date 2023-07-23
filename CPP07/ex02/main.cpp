#include "whatever.hpp"

int main() {
    int *a = new int();
    unsigned int size = sizeof(&a) / sizeof(*a);
    std::cout << size << std::endl;
    Array<int> tr;
    Array<char> tr2(15);
    std::cout << tr.array[1] << std::endl;
    std::cout << tr2.size() << std::endl;
    tr.array[1] = 4;
    std::cout << tr.array[1] << std::endl;
    return 0;
}