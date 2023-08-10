#include "helper.hpp"

void mergeD(std::deque<int>& sequence, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::deque<int> leftSubsequence(n1);
    std::deque<int> rightSubsequence(n2);
    for (int i = 0; i < n1; ++i)
        leftSubsequence[i] = sequence[left + i];
    for (int j = 0; j < n2; ++j)
        rightSubsequence[j] = sequence[mid + 1 + j];
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (leftSubsequence[i] <= rightSubsequence[j])
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
void mergeInsertSortD(std::deque<int>& sequence, int left, int right)
{
    if (left < right)
    {
        if (right - left <= 10)
        {
            // Use insertion sort for small subarrays
            for (int i = left + 1; i <= right; ++i)
            {
                int key = sequence[i];
                int j = i - 1;
                while (j >= left && sequence[j] > key)
                {
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
// void printSequenceD(std::deque<int>& sequence)
// {
//  // for (int num : sequence)
//  // {
//  //  std::cout << num << " ";
//  // }
//  std::cout << std::endl;
// }