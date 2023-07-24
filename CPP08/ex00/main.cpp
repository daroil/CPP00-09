#include "easyfind.hpp"


int main(void)
{

        // Create a vector of integers
        std::vector<int> myVector;

        // Inserting elements into the vector
        myVector.push_back(10);
        myVector.push_back(20);
        myVector.push_back(30);

//        // Accessing elements using the [] operator
//        std::cout << "First element: " << myVector[0] << std::endl;
//        std::cout << "Second element: " << myVector[1] << std::endl;
//        std::cout << "Third element: " << myVector[2] << std::endl;
//
//        // Size of the vector
//        std::cout << "Size of the vector: " << myVector.size() << std::endl;
//
//        // Iterating through the vector using a loop
//        std::cout << "Vector elements: ";
//        for (unsigned long i = 0; i < myVector.size(); ++i) {
//            std::cout << myVector[i] << " ";
//        }
//        std::cout << std::endl;
//
        try{
            std::vector<int>::iterator result = easyfind(myVector, 20);
            std::cout << std::distance(myVector.begin(), result) << std::endl;
            result = easyfind(myVector, 40);
            std::cout << std::distance(myVector.begin(), result) << std::endl;
//            std::cout << easyfind(myVector, 30) << std::endl;
//            std::cout << easyfind(myVector, 40) << std::endl;
        }
        catch (std::exception &e){
            std::cout << "error" << std::endl;
        }

    return 0;
}