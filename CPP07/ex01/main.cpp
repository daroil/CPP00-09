#include "whatever.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "Printing intArray: ";
    iter(intArray, 5, printElement<int>); // Pass the instantiated function template as the third parameter
    std::cout << std::endl;

    std::cout << "Printing doubleArray: ";
    iter(doubleArray, 5, printElement<double>); // Pass the instantiated function template as the third parameter
    std::cout << std::endl;

    std::cout << "Printing charArray: ";
    iter(charArray, 5, printElement<char>); // Pass the instantiated function template as the third parameter
    std::cout << std::endl;

    return 0;
}