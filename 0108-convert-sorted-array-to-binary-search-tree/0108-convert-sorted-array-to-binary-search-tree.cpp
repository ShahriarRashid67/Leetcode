/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* gen(vector<int>&nums,int l,int r){
        if(l>r) return NULL;
        int md=(l+r)/2;
        TreeNode* root=new TreeNode(nums[md]);
        root->left=gen(nums,l,md-1);
        root->right=gen(nums,md+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return gen(nums,0,nums.size()-1);
    }
};