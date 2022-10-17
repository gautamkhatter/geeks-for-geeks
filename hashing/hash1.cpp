/*
※ Title  :- Hashing
※ Author :- Gautam Khatter
※ Date   :- 17 October 2022
※ Question 1 :- Union of two arrays
※ Link:- https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
*/

#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  // Function to return the count of number of elements in union of two arrays.
  int doUnion(int a[], int n, int b[], int m)
  {
    // code here
    unordered_set<int> unionArr;
    for (int i = 0; i < n; i++)
    {
      unionArr.insert(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
      unionArr.insert(b[i]);
    }

    return unionArr.size();
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  return 0;
}

/*
------------------------
✥ Problem Statement
------------------------
Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in the union.
*/