//Find the Union and Intersection of the two sorted arrays.
//Link, https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> result;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            // Skip duplicates in a
            while (i > 0 && i < a.size() && a[i] == a[i - 1]) i++;
            // Skip duplicates in b
            while (j > 0 && j < b.size() && b[j] == b[j - 1]) j++;

            if (i >= a.size() || j >= b.size()) break;

            if (a[i] < b[j]) {
                result.push_back(a[i++]);
            } else if (b[j] < a[i]) {
                result.push_back(b[j++]);
            } else {
                result.push_back(a[i]);
                i++;
                j++;
            }
        }

        // Add remaining elements of a
        while (i < a.size()) {
            if (i == 0 || a[i] != a[i - 1])
                result.push_back(a[i]);
            i++;
        }

        // Add remaining elements of b
        while (j < b.size()) {
            if (j == 0 || b[j] != b[j - 1])
                result.push_back(b[j]);
            j++;
        }

        return result;
    }
};
