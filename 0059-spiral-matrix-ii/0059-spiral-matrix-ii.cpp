class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
       int minr=0;
       int maxr=n-1;
       int minc=0;
       int maxc=n-1;
       int x=1;
       while(minr<=maxr && minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            ans[minr][i]=x;
            x++;
        }
        minr++;
         if(minr>maxr || minc>maxc) break;
        for(int j=minr;j<=maxr;j++){
            ans[j][maxc]=x;
            x++;
        }
        maxc--;
         if(minr>maxr || minc>maxc) break;
             for(int i=maxc;i>=minc;i--){
            ans[maxr][i]=x;
            x++;
        }
          maxr--;
           if(minr>maxr || minc>maxc) break;
        for(int j=maxr;j>=minr;j--){
            ans[j][minc]=x;
            x++;
        }
        minc++;
    }
    return ans;
    }
};