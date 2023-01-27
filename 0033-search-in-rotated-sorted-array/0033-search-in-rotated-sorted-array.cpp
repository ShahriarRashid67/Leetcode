class Solution {
public:
    int minIndfinder(vector<int>&ar){
        int l=0,r=ar.size()-1;
        int md=-1;
        while(l<r){
            md=(l+r)/2;
            if(ar[md]>ar[r]){
                l=md+1;
            }else{
                r=md;
            }
        }
        return l;
    }
    int bSearch(vector<int>&nums,int l,int r,int target){
         
        while(l<=r){
            int md=(l+r)/2;
            if(nums[md]==target){
                return md;
            }
            if(nums[md]<target){
                l=md+1;
            }else{
                r=md-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int minInd=minIndfinder(nums);    
        int lSearch = bSearch(nums,0,minInd-1,target);
        int rSearch = bSearch(nums,minInd,nums.size()-1,target);
        return max(lSearch,rSearch);
    }
};