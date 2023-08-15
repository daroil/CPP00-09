#include "PmergeMe.hpp"
void merge(std::vector<std::pair<int, int> >& sequence, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::vector<std::pair<int, int> > leftSubsequence(n1);
    std::vector<std::pair<int, int> > rightSubsequence(n2);
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

void mergeInsertSort(std::vector<std::pair<int, int> >& sequence, int left, int right)
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
            mergeInsertSort(sequence, left, mid);
            mergeInsertSort(sequence, mid + 1, right);
            merge(sequence, left, mid, right);
        }
    }
}

void    binarySearch(std::vector<int> & finalSequence, int number, int left, int right)
{
    int mid = left + (right - left) / 2;
    if (number > finalSequence[mid - 1] && number < finalSequence[mid])
        finalSequence.insert(finalSequence.begin() + mid, number);
    else if (number > finalSequence[mid])
        binarySearch(finalSequence, number, mid, right);
    else if (number < finalSequence[mid])
        binarySearch(finalSequence, number, left, mid);
    else
        finalSequence.insert(finalSequence.begin() + mid, number);
}

//function binary_search(A, n, T) is
//        L := 0
//R := n − 1
//while L ≤ R do
//m := floor((L + R) / 2)
//if A[m] < T then
//L := m + 1
//else if A[m] > T then
//R := m − 1
//else:
//return m
//return unsuccessful