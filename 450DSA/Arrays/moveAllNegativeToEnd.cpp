// Move all the negative elements to one side of the array
// Link, https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        long long n = arr.size(); //
        
        vector<int> temp(n);
        long long co=0;
        
        //store positive in temp
        for(int i=0;i<n;i++) 
        {
            if(arr[i] >= 0)
            {
                temp[co] = arr[i];
                co++;
            }
        }
        
        //store negative in temp
        for(int i=0;i<n;i++)
        {
            if(arr[i] < 0)
            {
                temp[co] = arr[i];
                co++;
            }
        }
        
        //copy temp in arr
        for(int i=0;i<n;i++)
        {
            arr[i] = temp[i];
        }
        
        
    }
};
