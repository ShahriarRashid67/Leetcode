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
    const long long MAX =2147483648;
    long long inOrder(TreeNode* root,int &k){
        if(root==NULL) return MAX;
        long long int ans=MAX;
        if(root->val!=k) ans=root->val;
        ans=min(ans,inOrder(root->left,k));
        ans= min(ans,inOrder(root->right,k));
        return ans;
    }
    int findSecondMinimumValue(TreeNode* root) {
        int mn=root->val;
        long long ans=inOrder(root,mn);
        if(ans==MAX) return -1;
        return ans;
    }
};