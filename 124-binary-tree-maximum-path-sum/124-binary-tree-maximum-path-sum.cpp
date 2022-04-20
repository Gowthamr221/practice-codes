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
    int sol = INT_MIN; 
    int maxPathSum(TreeNode* root) {
       iterate(root);
       return sol; 
    }
    int iterate(TreeNode* root){
         if(root==NULL){
             return 0;
         }
        int lval = iterate(root->left);
        int rval = iterate(root->right);
        
        
        sol = max(root->val+lval+rval,sol);
        
        return max(0,max(root->val+lval,root->val+rval));
    }
  
};