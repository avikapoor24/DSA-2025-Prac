// Move all the negative elements to one side of the array
// Link, https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
       int n = arr.size();
       vector<int> temp(n);
       int co=0;
       
       // Store all Positive in Temp
       for(int i=0; i<n; i++)
       {
           if(arr[i] >= 0)
           {
               temp[co] = arr[i];
               co++;
           }
       }
       
       //Store all Negative in Temp
       for(int i=0; i<n; i++)
       {
           if(arr[i] < 0)
           {
               temp[co] = arr[i];
               co++;
           }
       }
        
        
        //Copy temp to arr
        for(int i=0;i<n;i++){
            arr[i] = temp[i];
        }
        
    }
};
