class Solution {
public:
    bool isHappy(int n) {
        
        while(n>5){
            int tmp=n;
            int sum=0;
            while(tmp){
                sum+=((tmp%10)*(tmp%10));
                tmp/=10;
            }
           // cout<<sum<<" ";
            n=sum;
        }
        return n==1;
    }
};

        