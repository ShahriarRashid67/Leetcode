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
    void calculate(TreeNode* root ,int low,int high,int &cnt){
        if(root==NULL) return;
        if(root->val>=low && root->val<=high) {
            cnt+=root->val;
            calculate(root->left,low,high,cnt);
            calculate(root->right,low,high,cnt);
        }else if(root->val<low){
            calculate(root->right,low,high,cnt);
        }else{
            calculate(root->left,low,high,cnt);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        calculate(root,low,high,ans);
        return ans;
    }
};