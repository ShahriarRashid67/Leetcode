class Solution {
public:
    bool IPv4 (string &s){
        string tmp="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                cnt++;
                int num=toINT(tmp);
                
                if(num>255 || (tmp[0]=='0' &&(tmp.size()!=1))){
                    return 0;
                }
                tmp="";
                continue;
            }
            tmp+=s[i];
        }
        int num=toINT(tmp);
        if(num>255 || (tmp[0]=='0' &&(tmp.size()!=1)) || cnt!=3){
            return 0;
        }
        return 1;
    }
    int toINT(string &s){
        if(s.size()==0 || s.size()>3) return 300;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>'9'){
                return 300;
            }
            ans=ans*10+(s[i]-'0');
        }
        return ans;
    }
    bool IPv6(string &s){
        int cnt=0;
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==':'){
                cnt++;
                if(!hex(tmp)) return 0;
                tmp="";
                continue;
            }
            tmp+=s[i];
        }
        if(!hex(tmp)) return 0;
        return cnt==7;
    }
    bool hex(string &s){
      //  cout<<s.size()<<" ";
        if(s.size()>4 || s.size()==0) return 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]>'9'){
                if(s[i]>'Z') s[i]^=32;
                
                if(s[i]>'F') {
                    cout<<s[i];
                    return 0;}
            }
        }
        return 1;
    }
    string validIPAddress(string queryIP) {
        if(IPv4(queryIP)){
            return "IPv4";
        }
        if(IPv6(queryIP)){
            return "IPv6";
        }
        return "Neither";
    }
};