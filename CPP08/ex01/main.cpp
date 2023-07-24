#include "Span.hpp"


int main(void)
{

//        std::vector<int> myVector;
//
//        myVector.push_back(10);
//        myVector.push_back(20);
//        myVector.push_back(30);
//
//        try{
//            std::vector<int>::iterator result = easyfind(myVector, 20);
//            std::cout << std::distance(myVector.begin(), result) << std::endl;
//            result = easyfind(myVector, 40);
//            std::cout << std::distance(myVector.begin(), result) << std::endl;
////            std::cout << easyfind(myVector, 30) << std::endl;
////            std::cout << easyfind(myVector, 40) << std::endl;
//        }
//        catch (std::exception &e){
//            std::cout << "error" << std::endl;
//        }

    Span sp = Span(5);
    try{
        for(int i = 0; i < 6; i++)
        {
            std::cout << "added" << std::endl;
            sp.addNumber(2);
        }
    }
    catch (std::exception &e) {}
    return 0;
}