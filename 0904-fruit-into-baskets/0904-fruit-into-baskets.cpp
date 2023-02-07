class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int l=0,r=0;
        int ans=0;
        while(r<fruits.size()){
            mp[fruits[r]]++;
            r++;
            
            while(mp.size()>2){
                
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            ans=max(ans,r-l);
           
        }
        return ans;
    }
};