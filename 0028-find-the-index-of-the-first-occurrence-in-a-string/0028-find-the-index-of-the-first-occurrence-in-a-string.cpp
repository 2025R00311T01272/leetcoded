class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.length();
        int n=haystack.length();
       if(m==1){
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[0]){
                return i;
            }
        }
       }
        int i=0;
        for(int i=0;i<=n-m;i++){
            if(haystack.substr(i,m)==needle){
                return i;
            }
        }
        return -1;
    }
};