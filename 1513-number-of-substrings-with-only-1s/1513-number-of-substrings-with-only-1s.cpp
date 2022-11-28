class Solution {
public:
    int numSub(string s) {
        long long ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                int j=i;
              i++;
                while((i<s.size()) && s[i]=='1') {i++;}
                long long tmp=i-j;
               
                tmp=((tmp)*(tmp+1)*(1LL))/2;
                tmp%=1000000007;
                ans+=tmp;
                ans%=1000000007;
            }
        }
        return ans;
    }
};