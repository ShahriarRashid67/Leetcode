class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freqT(130,0);
        for(auto c:t) freqT[c]++;
        int L=0,R=0;
        int idx=-1,minL=INT_MAX;
        int rem=t.size();
        while(R<s.size()){
            if(freqT[s[R]]>0) rem--;
            freqT[s[R]]--;
            R++;
            
            while(rem==0){
             
                if(minL>(R-L)){
                    minL=R-L;
                    idx=L;
                }
                if(freqT[s[L]]==0) rem++;
                freqT[s[L]]++;
                L++;
            }
        }
       
        return idx==-1? "" : s.substr(idx,minL);
    }
};