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
    int height(TreeNode *root){
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    void fun(TreeNode* root ,int lvl,vector<pair<long long,long long>>&vc){
        if(root==NULL) return;
        vc[lvl].first+=root->val;
        vc[lvl].second+=1;
        fun(root->left,lvl+1,vc);
        fun(root->right,lvl+1,vc);
        return;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int n=height(root);
        vector<pair<long long,long long>>vc(n);
        fun(root,0,vc);
        vector<double>ans;
        for(int i=0;i<n;i++){
            double tmp=(double)((vc[i].first*1.00)/(vc[i].second*1.00));
            ans.push_back(tmp);
        }
        return ans;
    }
};