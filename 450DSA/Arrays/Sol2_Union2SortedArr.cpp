// Union of Arrays with Duplicates
// Link, 

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        // 2 5 4 4 4 6 3 4
        // 7 2 9 2 2 2 1 5
        int n = a.size(); //8
        int m = b.size(); //8
        vector<int> res;
        
        // Add Elements from a to res
        // Sort a[]
        sort(a.begin(), a.end()); // 2 3 4 4 4 4 5 6 
        res.push_back(a[0]); // 1
        
        for(int i = 1; i<n; i++){
            if(a[i] != a[i-1])
            {
                res.push_back(a[i]);
            }
        }
        
        // Add elements from b to res
        // Sort b[]
        sort(b.begin(), b.end()); // 1 2 2 2 2 5 7 9
        
        for(int i = 0;i<m;i++)
        {
            // Avoiding Repetitions
            if(i!=0 and b[i] == b[i-1])
            {
                continue;
            }
            
            int l = res.size(); //  5 -> 6 ....
            bool flag = false;
            // check if already present in res
            for(int j=0; j<l; j++)
            {
                if(b[i] == res[j])
                {
                    flag = true;
                    break;
                }
            }
            
            if(!flag)
            {
                res.push_back(b[i]);
            }
        }
        
        
        return res; // 1 2 3 4 5 6 7 9
       
    }
};
