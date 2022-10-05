/*
※ Title  :- Arrays
※ Author :- Gautam Khatter
※ Date   :- 5 October 2022
※ Question 1 :- Binary Search
※ Link:- https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1
*/

#include <iostream>

using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
      int start = 0;
      int end = n - 1;
      int midIndex = start + (end - start) / 2;
      
      while(start <= end) {
        if(k == arr[midIndex]) {
          return midIndex;
        }

        if(k > arr[midIndex]) {
          // move to right part
          start = midIndex + 1;
        } else {
          // move to left part
          end = midIndex - 1;
        }
        midIndex = start + (end - start) / 2;
      }
      return -1;
    }
};

/*
------------------------
✥ Problem Statement
------------------------
Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.

You dont need to read input or print anything. 
Complete the function binarysearch() which takes arr[], N and K as input parameters and returns the index of K in the array. 
If K is not present in the array, return -1.

*/