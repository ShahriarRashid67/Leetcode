class Solution {
public:
    string frequencySort(string s) {
        vector<int>vc(130,0);
        for(auto c:s){
            vc[c]++;
        }
        vector<pair<int,int>>ar;
        for(int i=0;i<129;i++){
            if(vc[i]!=0){
                ar.push_back({vc[i],i});
            }
        }
        sort(ar.begin(),ar.end());
        reverse(ar.begin(),ar.end());
        string t="";
        for(auto [fre,ch] : ar){
            int x=fre;
            char c=(char)ch;
            while(x--){
                t+=c;
            }
        }
        return t;
    }
};