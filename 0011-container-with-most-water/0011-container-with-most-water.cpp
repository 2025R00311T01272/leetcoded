class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i = 0;
        int j = n - 1;
        int maxs = 0;
        while (i < j) {
            int a ;
            if (height[i] < height[j]) {
                a = (j - i) * height[i] ;
                if (a > maxs) {
                    maxs = a;
                }
                i++;
            } else if (height[j] < height[i]) {
                a = (j - i) * height[j] ;
                if (a > maxs) {
                    maxs = a;
                }
                j--;
            } else {
                a = (j - i) * height[i];
                if (a > maxs) {
                    maxs = a;
                }
                i++;
                j--;
            }
        }
        return maxs;
    }
};