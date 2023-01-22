class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ind=0;
        if(ruleKey=="color") ind=1;
        else if(ruleKey=="name") ind=2;
        
        int cnt=0;
        for(auto c :items){
            if(c[ind]==ruleValue) cnt++;
        }
        return cnt;
    }
};