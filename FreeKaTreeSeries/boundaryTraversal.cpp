#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
/// travers boundary of given binary tree
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};


bool isLeaf(TreeNode*root){
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    return false;
}
void inorderToFindBase(TreeNode* root,vector<int>&baseView){
    if(isLeaf(root)){
        baseView.push_back(root->val);
        return;
    }
    inorderToFindBase(root->left,baseView);
    inorderToFindBase(root->right,baseView);
}

void findLeft(TreeNode* root,stack<int>&leftView){
    while(!isLeaf(root)){
        leftView.push(root->val);
        if(root->left!=NULL){
            root =root->left;
        }
        else{
            root = root->right;
        }
    }
    return;
}

void findRight(TreeNode* root,vector<int>&rightView){
    while(!isLeaf(root)){
        rightView.push_back(root->val);
        if(root->right!=NULL){
            root = root->right;
        }else{
            root = root->left;
        }
    }
    return;
}




int main(){
    stack<int> leftView;
    vector <int> baseView;
    vector <int> rightView;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
  
    
    inorderToFindBase(root,baseView);
    findRight(root->right,rightView);
    findLeft(root,leftView);
    
    
    while(!leftView.empty()){
        int temp = leftView.top();
        leftView.pop();
        cout << temp << " ";

    }
    for(auto it : rightView){
        cout << it << " ";
    }
    for(auto it : baseView){
        cout << it << " ";
    }
}
   
