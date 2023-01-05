class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
     unordered_map<int,int>mp;
        for(auto x:tasks) mp[x]++;
        int ans=0;
        for(auto x: mp){
            int t=x.second;
            if(t==1) return -1;
            if(t%3==0){
                ans+=(t/3);
            }else{
                ans+=((t/3)+1);
            
            }
        }
        
     return ans;  
    }
};