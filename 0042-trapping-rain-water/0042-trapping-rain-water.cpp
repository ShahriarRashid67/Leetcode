class Solution {
public:
    int trap(vector<int>& height) {
        
        int L_mx=0,R_mx=0;
        int l=0,r=height.size()-1;
        int totalArea=0;
        
        while(l<r){
            
            L_mx=max(L_mx,height[l]);
            R_mx=max(R_mx,height[r]);
            
            if(height[l]<height[r]){
                totalArea+=(L_mx-height[l]);
                l++;
            }else{
                totalArea+=(R_mx-height[r]);
                r--;
            }
            
        }
        return totalArea;
    }
};