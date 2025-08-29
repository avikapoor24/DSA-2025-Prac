/*
Merge Without Extra Space
Difficulty: MediumAccuracy: 32.01%Submissions: 311K+Points: 4Average Time: 20m
Given two sorted arrays a[] and b[] of size n and m respectively, the task is to merge them in sorted order without using any extra space. Modify a[] so that it contains the first n elements and modify b[] so that it contains the last m elements.
*/

class Solution {
  public:
    // Helper function to calculate next gap
    int nextGap(int gap) {
        if (gap <= 1) return 0;
        return (gap / 2) + (gap % 2); // ceil(gap/2)
    }

    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();

        int gap = nextGap(n + m); // initial gap

        while (gap > 0) {
            int i = 0, j = gap;

            while (j < n + m) {
                int &val1 = (i < n) ? a[i] : b[i - n];
                int &val2 = (j < n) ? a[j] : b[j - n];

                if (val1 > val2) {
                    swap(val1, val2);
                }

                i++;
                j++;
            }

            gap = nextGap(gap); // reduce gap
        }
    }
};

