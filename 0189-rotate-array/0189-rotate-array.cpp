class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz=nums.size();
        vector<int>vc(sz);
        for(int i=0;i<nums.size();i++){
            vc[(i+k)%sz]=nums[i];
        }
        nums=vc;
      
        
    }
};
