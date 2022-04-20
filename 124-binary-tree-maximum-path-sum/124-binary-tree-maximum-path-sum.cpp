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
        int case1= max(root->val,max(lval+root->val,rval+root->val));
        int case2= max(case1,lval+rval+root->val);
        sol = max(case2,sol);
        
        return case1;
    }
  
};