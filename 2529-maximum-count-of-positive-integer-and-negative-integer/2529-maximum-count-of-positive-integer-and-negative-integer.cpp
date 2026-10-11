class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int x=n;
        int y=n;
         while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=0){
                x=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
         }
         low=0;
         high=n-1;
         while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>0){
                y=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }
         return max(x,n-y);

    }
};