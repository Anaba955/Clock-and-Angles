class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans(n+1,0),a(n+1,0);
        int c,r;
        for(int i=0;i<=n;i++){
            a[i]=i;
            c=0;
            r=0;
            while(a[i]>=1){
                r=a[i]%2;
                if(r==1)    c++;
                a[i]/=2;
            }
            ans[i]=c;
        }
        return ans;
    }
};
