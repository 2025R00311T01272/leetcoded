class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        vector<char>ans;
        int i=0;int j=0;
        while(j<n){
            if(chars[i]==chars[j]) j++;
            else{
                int len=j-i;
               ans.push_back(chars[i]);
             if (len > 1) {
                    string s = to_string(len);
                    for (char c : s) {
                        ans.push_back(c);
                    }
                }

               i=j;
            }
        }
         int len=j-i;
               ans.push_back(chars[i]);
               if (len > 1) {
                    string s = to_string(len);
                    for (char c : s) {
                        ans.push_back(c);
                    }
                }
                for (int k = 0; k < ans.size(); k++) {
            chars[k] = ans[k];
        }
        return ans.size();
    }
};