#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cerr << "Error, wrong input" << std::endl;
        return (1);
    }
    else
    {
        Bitcoin map;
        map.checkMapAgainstInput(argv[1]);
    }
    return 0;
}