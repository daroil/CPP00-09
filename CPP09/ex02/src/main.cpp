#include "../include/PmergeMe.hpp"

void printSequence(std::vector<int>& sequence)
{
    for (std::vector<int>::iterator iter = sequence.begin(); iter != sequence.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
}

void printSequencePairs(std::vector<std::pair<int, int> >& sequence)
{
    for (std::vector<std::pair<int, int> >::iterator iter = sequence.begin(); iter != sequence.end(); iter++)
    {
        std::cout << iter->first << " " << iter->second << " ";
    }
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
    }
}

void    insertSort(std::vector<std::pair<int, int> > &sequence)
{
    for (unsigned long i = 1; i <= sequence.size() - 1; ++i)
    {
        std::pair<int, int> key = sequence[i];
        int j = i - 1;
        while (j >= 0 && sequence[j].second > key.second)
        {
            sequence[j + 1] = sequence[j];
            --j;
        }
        sequence[j + 1] = key;
    }
}

bool    checkIfSorted(int argc, char **argv)
{
    for (int i = 1; i < argc - 1; ++i)
    {
//        std::cerr << "trigger" << argv[i] << " second " << argv[i+1] << std::endl;
        if (std::atoi(argv[i]) > std::atoi(argv[i+1]))
        {
            return false;
        }
    }
    return true;
}

bool    checkIfDigit(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
    {
        for(size_t j  = 0; j < std::strlen(argv[i]); ++j)
        {
            if (!std::isdigit(argv[i][j]))
                return false;
        }
    }
    return true;
}

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cerr << "Error, program accepts only sequence of positive integers in a form of individual arguments" << std::endl;
        return (1);
    }
    else {
        if (!checkIfDigit(argc, argv))
        {
            std::cerr << "Error, program accepts only sequence of positive integers in a form of individual arguments" << std::endl;
            return 1;
        }
        if (checkIfSorted(argc, argv))
        {
            std::cerr << "Error numbers are already sorted" << std::endl;
            return 1;
        }
        std::vector <std::pair<int, int> > vectorPairs;
        std::deque <std::pair<int, int> > dequePairs;
        int unpaired;
        bool hasUnpaired = false;
        if ((argc - 1) % 2 == 0)
        {
            for(int i = 1; i < argc; i = i + 2)
            {
                vectorPairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
                dequePairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
            }
        }
        else
        {
            hasUnpaired = true;
            int i;
            for(i = 1; i < argc - 1; i = i + 2)
            {
                vectorPairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
                dequePairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
            }
            unpaired = std::atoi(argv[i]);
        }
//        printSequencePairs(vectorPairs);
        if (vectorPairs.empty())
            std::cout << "one argument, nothing to sort" << std::endl;
        else
        {
            std::vector<int> finalSequence;
            std::deque<int> finalSequenceD;
            std::cout << "Before: ";
            printSequencePairs(vectorPairs);
            if (hasUnpaired)
                std::cout << "Unpaired " << unpaired << std::endl;
            double duration;

            std::clock_t st = std::clock();
            sort(vectorPairs, finalSequence, unpaired, hasUnpaired);
            std::clock_t end = std::clock();
            duration = static_cast<double >(end - st)/CLOCKS_PER_SEC;

            std::cout << "After: ";
            printSequence(finalSequence);
            std::cout << "Time to process a range of " << finalSequence.size() << " elements with std::[vector] : " << duration * 1000 << " ms" << std::endl;

            st = std::clock();
            sortD(dequePairs,finalSequenceD,unpaired,hasUnpaired);
            end = std::clock();
            duration = static_cast<double >(end - st)/CLOCKS_PER_SEC;

            std::cout << "Time to process a range of " << finalSequenceD.size() << " elements with std::[deque] : " << duration * 1000 << " ms" << std::endl;

        }
    }
    return 0;
}