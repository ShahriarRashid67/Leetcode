class Solution {
public:
    bool equalChecker(vector<int>&ar,vector<int>&br){
        for(int i=95;i<128;i++){
            if(ar[i]!=br[i]) return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return 0;
      vector<int>freq1(140,0),freq2(140,0);
        for(auto c:s1) freq1[c]++;
      
        int l=0,r=0;
        while(r<s1.size()){
            freq2[s2[r]]++;
            r++;
        }
        int ans=0;
        ans|=equalChecker(freq1,freq2);
        while(r<s2.size()){
            freq2[s2[l]]--;
            freq2[s2[r]]++;
            ans|=equalChecker(freq1,freq2);
            l++;
            r++;
        }
        return ans;
        
    }
};