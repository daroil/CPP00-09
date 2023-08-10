#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <chrono>
void printSequenceD(std::deque<int>& sequence);
void mergeInsertSortD(std::deque<int>& sequence, int left, int right) ;
void mergeD(std::deque<int>& sequence, int left, int mid, int right) ;