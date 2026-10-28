class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int n=t.length();
        int m=s.length();
        for(int k=0;k<n;k++){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i==m){
            return true;
        }
      return false;
    }
};