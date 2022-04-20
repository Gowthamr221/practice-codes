#include<iostream>
#include<vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int data){
        val = data;
        right = left = NULL;
    }
};

TreeNode* trimBST(TreeNode*root,int low,int high){
    if(root==nullptr){
        return nullptr;
    }
    if(root->val < low){
        return trimBST(root->right,low,high);
    }
    else if(root->val > high){
        return trimBST(root->left,low,high);
    }

    root->left = trimBST(root->left,low,high);
    root->right = trimBST(root->right,low,high);
    return root;
}

void inorderTrav(TreeNode*root){
    if(root==nullptr){
        return;
    }
    cout << root->val << " ";
    inorderTrav(root->left);
    inorderTrav(root->right);
}

int main(){
    TreeNode* node = new TreeNode(2);
    node->left = new TreeNode(1);
    node->right = new TreeNode(3);
    TreeNode* solution = trimBST(node,2,3);
    inorderTrav(solution);

}