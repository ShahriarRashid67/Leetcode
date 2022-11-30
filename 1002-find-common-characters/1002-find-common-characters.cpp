class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<int>vc(26,INT_MAX);
		for(auto x:words){
			vector<int>v(26,0);
			for(auto t:x) v[t-'a']++;
            
			for(int i=0;i<26;i++) vc[i] = min(vc[i],v[i]);
		}
		vector<string>ans;
		for(int i=0;i<26;i++){
            
			while(vc[i]--) ans.push_back(string(1,i+'a'));
		}
		return ans;
    }
};