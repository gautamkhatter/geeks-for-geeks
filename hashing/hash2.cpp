/*
※ Title  :- Hashing
※ Author :- Gautam Khatter
※ Date   :- 17 October 2022
※ Question 2 :- Check if two arrays are equal or not
※ Link:- https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

class Solution
{
public:
  // Function to check if two arrays are equal or not.
  // Approach 1
  bool check(vector<ll> A, vector<ll> B, int N)
  {
    // code here
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < N; i++)
    {
      if (A[i] != B[i])
      {
        return false;
      }
    }

    return true;
  }

  // Approach 2

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
Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not.

Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.

Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.
*/