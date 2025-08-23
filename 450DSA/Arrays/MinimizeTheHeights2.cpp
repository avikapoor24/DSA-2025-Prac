/*
Given an array arr[] denoting heights of n towers and a positive integer k.

For each tower, you must perform exactly one of the following operations exactly once.

Increase the height of the tower by k
Decrease the height of the tower by k
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease the height by k for each tower. After the operation, the resultant array should not contain any negative integers.
*/
//Link, https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) { // Ans, 9
        // code here
        // arr[] = 1 8 10 6 4 6 9 1 , k = 7
        int n = arr.size(); // 8
        if(n==1)
        {
            return 0;
        }
        
        //Sort Arr [O(n logn)]
        sort(arr.begin(), arr.end()); //1 1 4 6 6 8 9 10
        int res = arr[n-1] - arr[0]; //Initial Difference => 10-1 = 9
        
        //Loop [O(n)]
        for(int i=0;i<n;i++)
        {
            //min
            int minD = min(arr[0]+k, arr[i+1]-k); 
            
            //max
            int maxD = max(arr[i]+k, arr[n-1]-k);
            
            if(minD < 0) {continue;}
            
            //Update Res
            res = min(res, maxD-minD);
        }
        
        
        return res;
        
    }
};
