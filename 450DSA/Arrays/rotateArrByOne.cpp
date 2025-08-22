// Rotate Array by One
// Link, https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

class Solution {
  public:
    void rotate(vector<int> &arr) { //1 2 3 4 5 
        // code here
        int n = arr.size(); //5

        // Rotate arr
        for(int i=0 ; i<=n-1 ; i++)
        {
            swap(arr[i], arr[n-1]); // 1,5
        } 
        
        // arr[] = 5 1 2 3 4
    }
};
