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
    int mxSum=INT_MIN/2;
    int pathFinder(TreeNode* root){
        if(root==NULL) return 0;
        int L=pathFinder(root->left);
        int R= pathFinder(root->right);
        mxSum=max((L+R+root->val),mxSum);
        return max((max(L,R)+root->val),0);
    }
    int maxPathSum(TreeNode* root) {
        pathFinder(root);
        return mxSum;
    }
};