#include <vector>
#include <deque>

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cerr << "Error, program accepts only sequence of positive integers in a form of a single string arguement" << std::endl;
        return (1);
    }
    else{
        std::vector<std::pair<int, int>>    vectorPairs;
        std::deque<std::pair<int, int>>     dequePairs;

    }
    return 0;
}