class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cnt=0;
        for(auto c:s) if(c=='0') cnt++;
        int ans=cnt;
        for(auto c:s){
            if(c=='0'){
                cnt--;
                ans=min(ans,cnt);
            }else{
                cnt++;
            }
        }
            
        return ans;
    }
};
    