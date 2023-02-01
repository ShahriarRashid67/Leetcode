class Solution {
public:
    string multiply(string num1, string num2) {
        if((num2[0]=='0' && num2.size()==1) || (num1[0]=='0' && num1.size()==1)) return "0";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        vector<string>ans;
        for(int i=0;i<num2.size();i++){
            int x=num2[i]-'0';
            int carry=0;
            string tmp="";
            for(int j=0;j<num1.size();j++){
                int y=num1[j]-'0';
                int mul=(x*y)+carry;
                char c=(char)('0'+(mul%10));
                tmp+=c;
                carry=mul/10;
            }
            if(carry!=0){
                tmp+=(char)('0'+carry);
            }
           // reverse(tmp.begin(),tmp.end());
            int t=i;
            while(t--){
                tmp='0'+tmp;
            }
            ans.push_back(tmp);
        }
        int sz=0;
        for(int i=0;i<ans.size();i++){
            sz=max(sz,(int)ans[i].size());
        }
        for(int i=0;i<ans.size();i++){
            while(ans[i].size()!=sz){
                ans[i]+='0';
            }
        }
        string mult="";
        int carry=0;
        for(int i=0;i<sz;i++){
            int x=carry;
            for(int j=0;j<ans.size();j++){
              x+=ans[j][i]-'0';
            }
            char c=(char)('0'+(x%10));
            mult+=c;
            carry=x/10;
        }
        if(carry!=0){
              mult+=to_string(carry);
        }
      //  cout<<mult;
        reverse(mult.begin(),mult.end());
        return mult;
    }
};

//321
//654