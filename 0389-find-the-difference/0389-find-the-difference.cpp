class Solution {
public:
    char findTheDifference(string s, string t) {
        int ar[27];
        memset(ar,0,sizeof(ar));
        for(auto c:s){
            int x=c-'a';
            ar[x]++;
        }
        for(auto c:t){
            int x=c-'a';
            ar[x]--;
        }
        for(int i=0;i<27;i++){
          
            if(ar[i]<0){
                char c=i+'a';
                return c;
            }
        }
        return ' ';
    }
};