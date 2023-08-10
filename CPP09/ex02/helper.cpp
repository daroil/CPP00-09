#include "helper.hpp"
void printSequence(std::vector<int>& sequence)
{
    for (std::vector<int>::iterator iter = sequence.begin(); iter != sequence.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
}

void merge(std::vector<int>& sequence, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::vector<int> leftSubsequence(n1);
    std::vector<int> rightSubsequence(n2);
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
void mergeInsertSort(std::vector<int>& sequence, int left, int right)
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

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cerr << "Error: Not enough args" << std::endl;
        return (-1);
    }
    std::vector<int> sequence;
    std::deque<int> deq;
    int i = 0;
    while (argv[++i])
    {
        sequence.push_back(std::atoi(argv[i]));
        deq.push_back(std::atoi(argv[i]));
    }
    std::cout << "Before: ";
    printSequence(sequence);
    std::chrono::high_resolution_clock::time_point start;
    std::chrono::high_resolution_clock::time_point end;
    std::chrono::nanoseconds duration;
//    std::clock_t start_vect = clock();
    start = std::chrono::high_resolution_clock::now();
    mergeInsertSort(sequence, 0, sequence.size() - 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    std::cout << "Arter: ";
    printSequence(sequence);
    std::cout << "Time to process a range of " << sequence.size() << " elements with std::[vector] : " << duration.count() << " ns" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    mergeInsertSortD(deq, 0, deq.size() - 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    std::cout << "Time to process a range of " << sequence.size() << " elements with std::[deque] : " << duration.count() << " ns" << std::endl;
//    (void) start_vect;
    return 0;
}