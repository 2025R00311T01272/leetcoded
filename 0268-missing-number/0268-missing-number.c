int missingNumber(int* nums, int numsSize) {
    int sum=0;
    int m;
    int n=numsSize;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    m=(n*(n+1))/2-sum;
    return m;
}