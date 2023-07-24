#include "whatever.hpp"

int main() {
    Array<int> tr;
    Array<char> tr2(15);
    Array<char> tr3(tr2);
    try {
        std::cout << tr[2]<< std::endl;
    } catch (std::exception &e) {
        std::cout << "error 1" << std::endl;
    }
    try{
        std::cout << tr2.size() << std::endl;
        tr2[1] = 'A';
        tr3 = tr2;
        tr3[1] = 'B';
        std::cout << tr2[1] << std::endl;
        std::cout << tr3[1] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "error2" << std::endl;
    }
    return 0;
}