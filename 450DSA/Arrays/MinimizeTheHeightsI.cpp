/*
Minimize the Heights I
Difficulty: MediumAccuracy: 26.16%Submissions: 124K+Points: 4Average Time: 25m
Given a array arr[] and positive integer k denoting heights of towers, you have to modify the height of each tower either by increasing or decreasing them by k only once.

Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower. The modified height of the tower can be negative.

Note: A slight modification of the problem can be found here. 
*/
//Link, https://www.geeksforgeeks.org/problems/minimize-the-heights-i/1

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
            
            // if(minD < 0) {continue;} //Height can be negative in this ques
            
            //Update Res
            res = min(res, maxD-minD);
        }
        
        
        return res;
        
    }
};
