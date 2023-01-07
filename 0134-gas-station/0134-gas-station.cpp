class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tGas=0,cGas=0,tCost=0;
        int start=0;
        for(int i=0;i<n;i++){
            tGas+=gas[i];
            tCost+=cost[i];
            cGas+=gas[i]-cost[i];
            if(cGas<0){
                start=i+1;
                cGas=0;
            }
        }
     //   cout<<tGas<<" "<<tCost<<endl;
        if(tGas<tCost) return -1;
        else return start;
    }
};