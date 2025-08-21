// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
// Question Link, https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1 


class Solution {
  public:
    void f(vector <int>& arr, int n, int &z, int &o, int &t) //Scan number of 0,1,2
    {
        // int z=0,o=0,t=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){z++;}
            if(arr[i]==1){o++;}
            if(arr[i]==2){t++;}
        }
    }
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int z=0,o=0,t=0;
        
        // Func Call
        f(arr,n,z,o,t);
        
        //Update Array
        for(int i=0; i<=n-o-t; i++)
        {
            arr[i] = 0;
        }
        
        for(int i=z; i<=n-t; i++)
        {
            arr[i] = 1;
        }
        
        for(int i=z+o; i<=n; i++)
        {
            arr[i] = 2;
        }
        
    }
};
