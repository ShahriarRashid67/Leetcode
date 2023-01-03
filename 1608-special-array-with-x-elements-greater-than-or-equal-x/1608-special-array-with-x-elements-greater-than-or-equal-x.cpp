class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
        int ind=lower_bound(nums.begin(),nums.end(),i)-nums.begin();
        ind=nums.size()-ind;
            if(ind==i){
                return i;
            }
        }
        return -1;
    }
};