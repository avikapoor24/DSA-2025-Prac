/*
Kadane's Algorithm
Difficulty: MediumAccuracy: 36.28%Submissions: 1.2MPoints: 4Average Time: 20m
You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

Note : A subarray is a continuous part of an array.
*/
// Link, https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int maxSum = INT_MIN;
        
        int i = 0, j =0;
        int currSum = 0;
        bool flag = true; 
        for(int i=0;i<n;i++)
        {
            currSum += arr[i];
            
            if(currSum<arr[i])
            {
                currSum = arr[i];
            }
            
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
            
        }
        
        
        return maxSum;
    }
};
