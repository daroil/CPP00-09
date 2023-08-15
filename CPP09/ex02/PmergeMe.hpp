#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <chrono>

void merge(std::vector<std::pair<int, int> >& sequence, int left, int mid, int right);
void mergeInsertSort(std::vector<std::pair<int, int> >& sequence, int left, int right);
void    binarySearch(std::vector<int> & finalSequence, int number, int left, int right);