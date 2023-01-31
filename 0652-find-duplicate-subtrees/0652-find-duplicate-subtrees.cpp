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
    map<string,int>mp;
    string hashGen(TreeNode *root,vector<TreeNode*>&ans){
        if(root==NULL) return "#";
        string gen=to_string(root->val)+','+hashGen(root->left,ans)+','+hashGen(root->right,ans);
        mp[gen]++;
        if(mp[gen]==2){
            ans.push_back(root);
        }
        return gen;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>ans;
        hashGen(root,ans);
        return ans;
    }
};