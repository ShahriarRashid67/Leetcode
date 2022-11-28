class Solution {
public:
    bool checkPowersOfThree(int n) {
        int mx =(1<<16);
        for(int mask=0;mask<mx;mask++){
            int tmpSum=0;
            for(int i=0;i<16;i++){
                if(mask&(1<<i)){
                    tmpSum+=pow(3,i);
                }
            }
            if(tmpSum==n)return 1;
            
        }
        return 0;
    }
};