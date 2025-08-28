/*
Minimum Jumps
Difficulty: MediumAccuracy: 11.91%Submissions: 1MPoints: 4
You are given an array arr[] of non-negative numbers. Each number tells you the maximum number of steps you can jump forward from that position.

For example:

If arr[i] = 3, you can jump to index i + 1, i + 2, or i + 3 from position i.
If arr[i] = 0, you cannot jump forward from that position.
Your task is to find the minimum number of jumps needed to move from the first position in the array to the last position.

Note:  Return -1 if you can't reach the end of the array.
*/
// Link, https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        if (n <= 1) return 0;        // already at the end
        if (arr[0] == 0) return -1;  // cannot move anywhere
        
        int maxReach = arr[0]; // farthest index reachable
        int steps = arr[0];    // steps we can still take
        int jumps = 1;         // first jump taken
        
        for (int i = 1; i < n; i++) {
            if (i == n - 1) return jumps; // reached end
            
            maxReach = max(maxReach, i + arr[i]);
            steps--; // used one step
            
            if (steps == 0) {
                jumps++;
                if (i >= maxReach) return -1; // stuck
                steps = maxReach - i;
            }
        }
        
        return -1;
    }
};
