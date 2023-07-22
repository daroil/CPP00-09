#include "Serializer.hpp"

int main(void)
{

    Data myData;
    myData.num = 123;
    myData.myStr = "Hi!";

    std::cout << "num: " << Serializer::deserialize(Serializer::serialize( &myData ))->num << std::endl;
    std::cout << "str: " << Serializer::deserialize(Serializer::serialize( &myData ))->myStr << std::endl;

    return 0;
}