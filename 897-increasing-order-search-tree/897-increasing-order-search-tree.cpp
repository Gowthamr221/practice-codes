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
    TreeNode* dummy = new TreeNode(0);
public:
    void helper(TreeNode* root){
        if(root==NULL){
            return;
        }
        helper(root->left);
        root->left = NULL;
        dummy->right = root;
        dummy=root;
        helper(root->right);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        // we have to hold on the initial pointer so that we can access the chain and return at the end
        TreeNode* solution = dummy;
        helper(root);
        return solution->right;
    }
};