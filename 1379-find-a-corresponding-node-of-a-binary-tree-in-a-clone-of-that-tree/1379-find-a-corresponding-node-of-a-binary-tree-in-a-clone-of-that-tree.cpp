/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* refer;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(cloned,target);
        return refer;
    }
    void solve(TreeNode* cloned,TreeNode* target){
        if(cloned==NULL){
            return;
        }
        
        if(cloned->val == target->val){
            refer = cloned;
            return;
        }
        solve(cloned->left,target);
        solve(cloned->right,target);
    }
   
   
};