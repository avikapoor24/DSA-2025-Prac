// Basic Approach [O(n^2)] [O(1)]
/*
Easy
Topics
premium lock icon
Companies
Hint
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); //4
        // 2 7 11 15
        
        int i=0, j=n-1;
        while(i<n-1 || j<i)
        {
            if(nums[i]+nums[j] == target)
            {
                return {i,j};
            }

            j--;

            if(j == i and i!=n-1)
            {
                j=n-1;
                i++;
            }

        }
        return {};
    }
};
