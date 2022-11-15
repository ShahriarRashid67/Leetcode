class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        int cnt=0;
        for(auto c: s) if(c>='A') cnt++;
        
        vector<string>ans;
        int mx=(1<<cnt);
        for(int mask=0;mask<mx;mask++){
            int cCnt=0;
            string t=s;
            for(int i=0;i<s.size();i++){
                if(s[i]>='A'){
                    if(mask&(1<<cCnt)){
                        t[i]^=32;
                    }
                    cCnt++;
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};