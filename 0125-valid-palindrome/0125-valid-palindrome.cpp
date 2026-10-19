class Solution {
public:
     bool notvalid(char x){
        if(x>=97 && x<=122) return false;
        if(x>=48 && x<=57) return false;
        return true;
     }
    bool isPalindrome(string s) {
       int n=s.length();
       int i=0;
       int j=n-1;
       while(i<j){
        char x=s[i],y=s[j];
        if(x>=65 && x<=90) x+=32;
        if(y>=65 && y<=90) y+=32;
        if(notvalid(x)) i++;
        else if(notvalid(y)) j--;
        else{
            if(x!=y) return false;
            i++;
            j--;
        }
       }
       return true;
    }
};