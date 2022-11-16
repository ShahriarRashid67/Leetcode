class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0;
        int c=0;
       
        while(i<a.size() || i<b.size()){
            int x=0;
            int y=0;
            if(i<a.size()){
                x=a[i]-'0';
            }
            if(i<b.size()){
                y=b[i]-'0';
            }
          
            int sum=x+y+c;
            s+=(sum%2+'0');
            c=(sum/2);
            i++;
        }
        if(c==1){
        s+='1';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};