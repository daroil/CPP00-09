
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>


void	errorMessage(std::string message)
{
    std::cout << message << std::endl;
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (errorMessage("Error, wrong input"), 1);
    else
    {

    }
    return 0;
}