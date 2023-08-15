#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <chrono>

void printSequence(std::vector<std::pair<int, int> >& sequence)
{
    for (std::vector<std::pair<int, int> >::iterator iter = sequence.begin(); iter != sequence.end(); iter++)
    {
        std::cout << "first " << iter->first << " second " << iter->second << " ";

    }
//        std::cout << *iter << " ";
    std::cout << std::endl;
}

void    compareSwap(std::pair<int, int>& pair)
{
    if (pair.first > pair.second)
    {
        int tmp;
        tmp = pair.first;
        pair.first = pair.second;
        pair.second = tmp;
        std::cout << "swapped" << std::endl;
    }
}

void    recSort(std::vector)

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cerr << "Error, program accepts only sequence of positive integers in a form of individual arguements" << std::endl;
        return (1);
    }
    else{
        std::vector<std::pair<int, int> >    vectorPairs;
        std::deque<std::pair<int, int> >     dequePairs;

        if ((argc - 1) % 2 == 0)
        {
            for(int i = 1; i < argc; i = i + 2)
            {
                vectorPairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
            }
        }
        else
        {
            int unpaired;
            int i;
            for(i = 1; i < argc - 1; i = i + 2)
            {
                vectorPairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
            }
            unpaired = std::atoi(argv[i]);
            std::cout << unpaired << " left unpaired " << std::endl;
        }
        printSequence(vectorPairs);
        for (std::vector<std::pair<int, int> >::iterator iter = vectorPairs.begin(); iter != vectorPairs.end(); iter++)
        {
            compareSwap(*iter);
        }
        printSequence(vectorPairs);

    }
    return 0;
}