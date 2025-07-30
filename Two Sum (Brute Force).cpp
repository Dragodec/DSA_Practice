// Two Sum bruteforce approach O(n^2)
// usage of endl within loops can lead to buffering and performance issues
#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> nums, int target) // method that solves the problem takes in the given vector and the target
{
  bool hasIndices = false; // to keep track of whether the indices has been found or not
  for(int i = 0; i < nums.size(); i++) // loop to get the first index
  {
      for(int j = i + 1; j < nums.size(); j++) // loop to get the second index
      {
          if(nums[i] + nums[j] == target) // if adding the two index values gives target
          {
              cout << i << " " << j << "\n"; // print indices with a space
              hasIndices = true; // set the value to true coz we found the indices
              break; // return to stop furthur looping once condition gets true
          }
      }
      if(hasIndices) break; // to break outer loop 
  }
    if(!hasIndices) cout << "No pair found" << "\n"; // if no two indices add up to give the target we print this
}

int main()
{
    vector<int> nums = {2, 7, 11, 15}; // vector sample
    int target = 133; // sample target
    twoSum(nums, target); // method call to solve the problem
}
