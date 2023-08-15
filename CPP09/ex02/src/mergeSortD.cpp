#include "../include/PmergeMe.hpp"

void mergeD(std::deque<std::pair<int, int> >& sequence, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::deque<std::pair<int, int> > leftSubsequence(n1);
    std::deque<std::pair<int, int> > rightSubsequence(n2);
    for (int i = 0; i < n1; ++i)
        leftSubsequence[i] = sequence[left + i];
    for (int j = 0; j < n2; ++j)
        rightSubsequence[j] = sequence[mid + 1 + j];
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (leftSubsequence[i].second <= rightSubsequence[j].second)
        {
            sequence[k] = leftSubsequence[i];
            ++i;
        }
        else
        {
            sequence[k] = rightSubsequence[j];
            ++j;
        }
        ++k;
    }
    while (i < n1)
    {
        sequence[k] = leftSubsequence[i];
        ++i;
        ++k;
    }
    while (j < n2)
    {
        sequence[k] = rightSubsequence[j];
        ++j;
        ++k;
    }
}

void mergeInsertSortD(std::deque<std::pair<int, int> >& sequence, int left, int right)
{
    if (left < right)
    {
        if (right - left <= 10)
        {
            // Use insertion sort for small subarrays
            for (int i = left + 1; i <= right; ++i)
            {
                std::pair<int, int> key = sequence[i];
                int j = i - 1;
                while (j >= left && sequence[j].second > key.second)
                {
//                printSequence(sequence);
                    sequence[j + 1] = sequence[j];
                    --j;
                }
                sequence[j + 1] = key;
            }
        }
        else
        {
            int mid = left + (right - left) / 2;
            mergeInsertSortD(sequence, left, mid);
            mergeInsertSortD(sequence, mid + 1, right);
            mergeD(sequence, left, mid, right);
        }
    }
}
void    binarySearchD(std::deque<int> & finalSequence, int number, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
//        std::cout << "mid " << mid << " left " << left << " right "<< right << std::endl;
        if (number >= finalSequence[mid - 1] && number <= finalSequence[mid])
            finalSequence.insert(finalSequence.begin() + mid, number);
        else if (number > finalSequence[mid])
            binarySearchD(finalSequence, number, mid + 1, right);
        else if (number < finalSequence[mid])
            binarySearchD(finalSequence, number, left, mid);
    }
    else
        finalSequence.insert(finalSequence.begin() + right, number);
}

void    sortD(std::deque<std::pair<int, int> > &dequePairs, std::deque<int> &finalSequence, int unpaired, bool hasUnpaired)
{
    for (std::deque<std::pair<int, int> >::iterator iter = dequePairs.begin(); iter != dequePairs.end(); iter++)
    {
        compareSwap(*iter);
    }
    //        printSequencePairs(vectorPairs);
    mergeInsertSortD(dequePairs, 0, dequePairs.size() - 1);
    //        printSequencePairs(vectorPairs);

    for (std::deque<std::pair<int, int> >::iterator iter = dequePairs.begin(); iter != dequePairs.end(); iter++)
    {
        finalSequence.push_back(iter->second);
    }
    finalSequence.insert(finalSequence.begin(),dequePairs.front().first);
    //        printSequence(finalSequence);

    for (std::deque<std::pair<int, int> >::iterator iter = dequePairs.begin() + 1; iter != dequePairs.end(); iter++)
    {
        binarySearchD(finalSequence, iter->first, 0, finalSequence.size() - 1);
    }
    //        printSequence(finalSequence);
    if (hasUnpaired)
    {
        //            std::cout << "Unpaired " << unpaired << std::endl;
        binarySearchD(finalSequence, unpaired, 0, finalSequence.size() - 1);
    }
}