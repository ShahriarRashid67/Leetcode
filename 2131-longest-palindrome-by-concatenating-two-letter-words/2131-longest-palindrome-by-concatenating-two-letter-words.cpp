class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<pair<int,int>,int>mp;
        for(auto x:words){
             mp[{x[0]-'a',x[1]-'a'}]++;
        }
        int ans=0;
        for(int i=0;i<27;i++){
            for(int j=0;j<27;j++){
                if(i!=j){
                    ans+=min(mp[{i,j}],mp[{j,i}]);
                }
            }
        }
        int mx=0;
        for(int i=0;i<27;i++){
           if(mp[{i,i}]%2==0) {
               ans+=mp[{i,i}];
             }
            else{
             ans+=(mp[{i,i}])-1;
                mx=1;
            }
            
        }
        return 2*(ans+mx);
    }
};