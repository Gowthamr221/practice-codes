#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode*right;
    TreeNode*left;
    TreeNode(int data){
        val = data;
        right=left=NULL;
    }
};


void preorder(TreeNode * head){
    if(head==NULL){
        return;
    }
    cout << head->val << " ";
    preorder(head->left);
    preorder(head->right);
}

TreeNode* trimBST(TreeNode* root, int low, int high) {
         // base condition
        if(root==NULL){
            return NULL;
        }
        // if value is out of bounds
        if(root->val > high){
            return trimBST(root->left,low,high);
        }
        else if(root->val < low){
            return trimBST(root->right,low,high);
        }
        
        root->left = trimBST(root->left,low,high);
        root->right = trimBST(root->right,low,high);
        return root;
    }

int main(){
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    
     
    TreeNode * solution = trimBST(root,2,3);
    
    preorder(solution);
    return 0;
}