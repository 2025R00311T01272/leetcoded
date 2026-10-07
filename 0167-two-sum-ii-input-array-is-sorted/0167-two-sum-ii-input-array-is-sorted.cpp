class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2,-1);
        int n=numbers.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(numbers[i]+numbers[j]>target) j--;
            else if(numbers[i]+numbers[j]<target) i++;
            else{
              ans[0]=i+1;
              ans[1]=j+1; //index 1 se hai
              break;
            }
        }
        return ans;
        
    }
};