class Solution {
public:
void reverse(int i,int j,string&s){
    while(i<j){
        swap(s[i],s[j-1]);
        i++;
        j--;
    }
}
    string reverseWords(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        while(j<n){
            if(s[j]!=' '){
                j++;
            }
            else{
                reverse(i,j,s);
                i=j;
               if(s[j]==' ' && i<n){
                i++;
                j++;
               }
            }
        }
           reverse(i,j,s);
                i=j;
               if(s[i]==' '){
                i++;
                j++;
               }
           string ans;
            i=n-1;
            j=n-1;
           while(j>=0){
            if(s[j]!=' '){
                ans.push_back(s[j]);
                j--;
            }
            else{
                i=j;
                if(s[i]==' ' && i>=0){
                    i--;
                    j--;
                }
             if (!ans.empty() && ans.back() != ' ') {
    ans.push_back(' ');
}
            }
           }
           if (!ans.empty() && ans.back() == ' ') {
    ans.pop_back();
}
          return ans; 
    }
};