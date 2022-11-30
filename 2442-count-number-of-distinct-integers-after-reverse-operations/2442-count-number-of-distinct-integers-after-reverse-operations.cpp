class Solution {
public:
    int pali (int n){
        int tmp=n;
        int x=0;
        while(tmp){
        int rem=tmp%10;
        x=(x*10)+rem;   
        tmp/=10;
        }
        return x;
    }
    int countDistinctIntegers(vector<int>& nums) {
         map<int,int>mp;
        for(auto x: nums){
            mp[x]++;
            mp[pali(x)]++;
        }
        
      
        return mp.size();
    }
};