#include "PmergeMe.hpp"

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
//        std::cout << "swapped" << std::endl;
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
//                printSequence(sequence);
            sequence[j + 1] = sequence[j];
            --j;
        }
        sequence[j + 1] = key;
    }
}

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cerr << "Error, program accepts only sequence of positive integers in a form of individual arguements" << std::endl;
        return (1);
    }
    else{
        std::vector<std::pair<int, int> >    vectorPairs;
        std::deque<std::pair<int, int> >     dequePairs;
        int unpaired;
        bool hasUnpaired = false;

        if ((argc - 1) % 2 == 0)
        {
            for(int i = 1; i < argc; i = i + 2)
            {
                vectorPairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
            }
        }
        else
        {
            hasUnpaired = true;
            int i;
            for(i = 1; i < argc - 1; i = i + 2)
            {
                vectorPairs.push_back(std::make_pair(std::atoi(argv[i]), std::atoi(argv[i+1])));
            }
            unpaired = std::atoi(argv[i]);
//            std::cout << unpaired << " left unpaired " << std::endl;
        }
//        printSequencePairs(vectorPairs);
        std::cout << "Before: ";
        printSequencePairs(vectorPairs);
        std::chrono::high_resolution_clock::time_point start;
        std::chrono::high_resolution_clock::time_point end;
        std::chrono::nanoseconds duration;
        start = std::chrono::high_resolution_clock::now();
        for (std::vector<std::pair<int, int> >::iterator iter = vectorPairs.begin(); iter != vectorPairs.end(); iter++)
        {
            compareSwap(*iter);
        }
//        printSequencePairs(vectorPairs);
        mergeInsertSort(vectorPairs, 0, vectorPairs.size() - 1);
//        printSequencePairs(vectorPairs);
        std::vector<int> finalSequence;
        for (std::vector<std::pair<int, int> >::iterator iter = vectorPairs.begin(); iter != vectorPairs.end(); iter++)
        {
            finalSequence.push_back(iter->second);
        }
        finalSequence.insert(finalSequence.begin(),vectorPairs.front().first);
//        printSequence(finalSequence);
        for (std::vector<std::pair<int, int> >::iterator iter = vectorPairs.begin() + 1; iter != vectorPairs.end(); iter++)
        {
            binarySearch(finalSequence, iter->first, 0, finalSequence.size() - 1);
        }
        if (hasUnpaired)
            binarySearch(finalSequence, unpaired, 0, finalSequence.size() - 1);
        end = std::chrono::high_resolution_clock::now();
        duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
        std::cout << "After: ";
        printSequence(finalSequence);
        std::cout << "Time to process a range of " << finalSequence.size() << " elements with std::[vector] : " << duration.count() << " ns" << std::endl;
    }
    return 0;
}