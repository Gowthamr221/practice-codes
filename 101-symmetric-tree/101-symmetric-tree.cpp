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
vector<int>left;
vector<int>right;
public:
    bool isSymmetric(TreeNode* root) {
        checkRight(root->right);
        checkLeft(root->left);
        return left==right;  
    }
    
    void checkRight(TreeNode* node){
        if(node==NULL){
            right.push_back(NULL);
            return;
        }
        right.push_back(node->val);
        checkRight(node->right);
        checkRight(node->left);
    }
     void checkLeft(TreeNode* node){
        if(node==NULL){
            left.push_back(NULL);
            return;
        }
        left.push_back(node->val);
        checkLeft(node->left);
        checkLeft(node->right);
    }
};