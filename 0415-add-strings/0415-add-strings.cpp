class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        
        if(num1.size()<num2.size()){
            swap(num1,num2);
        }
        if(num1.size()!=num2.size()){
            int sz=num1.size();
            while(num2.size()!=sz){
                num2+='0';
            }
        }
        int c=0;
        string ans;
        for(int i=0;i<num1.size();i++){
            int tmp=num1[i]+num2[i]-2*'0' +c;
            if(tmp>9){
                tmp%=10;
                c=1;
            }else{
                c=0;
            }
            char t=tmp+'0';
            ans+=t;
        }
        if(c==1){
             char t=1+'0';
            ans+=t;
        }
     reverse(ans.begin(),ans.end());
      return ans;
    }
};