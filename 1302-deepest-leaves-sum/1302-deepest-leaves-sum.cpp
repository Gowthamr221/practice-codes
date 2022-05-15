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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>todo;
        int sum;
        todo.push(root);
        while(!todo.empty()){
            int arrsize = todo.size();
            sum=0;
            for(int i=0;i<arrsize;i++){
            TreeNode* currNode = todo.front();
            todo.pop();
            sum = sum+currNode->val;
            if(currNode->left){
                todo.push(currNode->left);
            }
            if(currNode->right){
                todo.push(currNode->right);
            }
            }
        }
        return sum;
    }
};