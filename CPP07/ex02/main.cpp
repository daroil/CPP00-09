#include "whatever.hpp"

int main() {
    int *a = new int();
    std::cout << a[2] << std::endl;
    Array<int> tr;
    Array<char> tr2(15);
    std::cout << tr.array[1] << std::endl;
    std::cout << tr2.size() << std::endl;

    return 0;
}