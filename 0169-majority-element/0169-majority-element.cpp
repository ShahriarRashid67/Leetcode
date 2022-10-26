class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int vote=0,winner=0;
        for(int i=0;i<nums.size();i++){
            if(vote==0){
                winner=nums[i];
            }
            if(nums[i]==winner){
                vote++;
            }else{
                vote--;
            }
        }
        return winner;
    }
};