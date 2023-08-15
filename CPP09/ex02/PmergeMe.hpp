#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <chrono>

void merge(std::vector<std::pair<int, int> >& sequence, int left, int mid, int right);
void mergeInsertSort(std::vector<std::pair<int, int> >& sequence, int left, int right);
void    binarySearch(std::vector<int> & finalSequence, int number, int left, int right);
void    sort(std::vector<std::pair<int, int> > &vectorPairs, std::vector<int> &finalSequence, int unpaired, bool hasUnpaired);
void printSequence(std::vector<int>& sequence);
void printSequencePairs(std::vector<std::pair<int, int> >& sequence);
void    compareSwap(std::pair<int, int>& pair);
void    insertSort(std::vector<std::pair<int, int> > &sequence);
void    sortD(std::deque<std::pair<int, int> > &dequePairs, std::deque<int> &finalSequence, int unpaired, bool hasUnpaired);
void    binarySearchD(std::deque<int> & finalSequence, int number, int left, int right);