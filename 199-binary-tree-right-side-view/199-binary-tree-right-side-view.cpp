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
    vector<int>ans;
    
public:
    vector<int> rightSideView(TreeNode* root) {
        compute(root,0);
        return ans;
    }
    
    void compute(TreeNode*root,int level){
        
        if(root==NULL){
            return;
        }
        if(level == ans.size()){
            ans.push_back(root->val);
        }
        compute(root->right,level+1);
        compute(root->left,level+1);
       
        
    }
};