class Solution {
public:
    int fib(int n) {
        int pre1=0,pre2=1,ans=1;
        if(n==0) return 0;
        if(n==1) return 1;
        for(int i=2;i<=n;i++){
            ans=pre1+pre2;
            pre1=pre2;
            pre2=ans;
        }
        return ans;
    }
};