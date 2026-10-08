class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        int j=0;
        int i=0;
        int count=0;
        vector<int> ans;
        vector<int> ans1(2,0);
        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums2[j]>nums1[i]){
                i++;
            }
            else{
             if(ans.empty() || ans.back() != nums1[i]) 
                ans.push_back(nums1[i]);
             i++;
             j++;
            }
        }
        int k=ans.size();
        int x=0;
       for(int j=0;j<k;j++){
          for(int i=0;i<n;i++){
            if(ans[j]==nums1[i]){
              x++;
            }
          }
       }
          int y=0;
          for(int j=0;j<k;j++){
            for(int i=0;i<m;i++){
                if(ans[j]==nums2[i]){
                    y++;
                }
            }
          }
          ans1[0]=x;
          ans1[1]=y;
          return ans1;
       }
};