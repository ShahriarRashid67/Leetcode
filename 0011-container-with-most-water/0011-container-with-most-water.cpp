class Solution {
public:
    int maxArea(vector<int>& height) {
         int l=0,r=height.size()-1;
        int ans=0;
        while(l<r){
            int x= min(height[l],height[r]);
            int y= r-l;
            ans=max(ans,x*y);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
            
        }
        return ans;
    }
};