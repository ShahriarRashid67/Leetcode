class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2;
       ans+=((low&1)|(high&1));
        return ans;
    }
};
  