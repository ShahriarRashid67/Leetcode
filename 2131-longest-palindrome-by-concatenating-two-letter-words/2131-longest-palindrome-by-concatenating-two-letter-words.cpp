class Solution {
public:
    int longestPalindrome(vector<string>& words) {
          map<pair<int,int> ,int>mp;
        for(auto x:words){
             mp[{x[0],x[1]}]++;
        }
        int ans=0;
        for(int i=97;i<130;i++){
            for(int j=97;j<130;j++){
                if(i!=j){
                    ans+=min(mp[{i,j}],mp[{j,i}]);
                }
            }
        }
        int mx=0;
        for(int i=97;i<130;i++){
            ans+=mp[{i,i}];
            if(mp[{i,i}]%2==1){
                ans--;
                mx=1;
            }
           
        }
        return 2*(ans+mx);
    }
};