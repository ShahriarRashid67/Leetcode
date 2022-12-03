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
      void preorder(TreeNode* root,vector<int> &vc){
        if(!root) return;
          
        vc.push_back(root->val);
        preorder(root->left,vc);
        preorder(root->right,vc);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
           vector<int>vc;
        preorder(root,vc);
        return vc;
    }
};