class Solution {
public:
    long long smallestNumber(long long num) {
        int sign=0;
        if(num<0){
            sign=1;
            num=abs(num);
        }
        string s=to_string(num);
        long long ans=0;
        if(sign==0){
            sort(s.begin(),s.end());
            int i=0;
            while(s[i]=='0' && i<s.size()-1){
                i++;
            }
            swap(s[0],s[i]);
            
        }else{
            sort(s.begin(),s.end(),greater<int>());
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
                ans=(ans*10)+(s[i]-'0');
       }
        if(sign)ans*=(-1);
        return ans;
    }
};