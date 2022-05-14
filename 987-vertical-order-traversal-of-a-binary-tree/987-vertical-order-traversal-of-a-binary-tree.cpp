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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       map<int,map<int,multiset<int>>> nodes;
       queue <pair<TreeNode*,pair<int,int>>> storage;
       storage.push({root,{0,0}});
       while(!storage.empty()){
           pair<TreeNode*,pair<int,int>> p = storage.front();
           storage.pop();
           int x = p.second.first;
           int y = p.second.second;
           auto node = p.first;
           nodes[x][y].insert(node->val);
           if(node->left){
               storage.push({node->left,{x-1,y+1}});
           }
           if(node->right){
               storage.push({node->right,{x+1,y+1}});
           }
       } 
        vector<vector<int>>ans;
        for(auto p : nodes){
            vector<int>col;
            for(auto q : p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        
       return ans;
        
    }
};