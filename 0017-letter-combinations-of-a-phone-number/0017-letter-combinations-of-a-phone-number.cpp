class Solution {
public:
     unordered_map<char, string> mp {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    void gen(int pos,string &digits,vector<string>&ans,string tmp=""){
        if(digits.size()==tmp.size()){
            ans.push_back(tmp);
            return;
        }
       
        for(auto c: mp[digits[pos]]){
            tmp+=c;
            gen(pos+1,digits,ans,tmp);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()!=0){
        gen(0,digits,ans);
        }
        return ans;
    }
};