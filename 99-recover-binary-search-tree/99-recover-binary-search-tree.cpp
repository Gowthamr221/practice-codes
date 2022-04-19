class Solution {
private:
    TreeNode* first;
    TreeNode* prev;
    TreeNode* next;
    TreeNode* last;
public:
    void inorder(TreeNode*root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        if(prev!=NULL && (root->val < prev->val)){
            if(first==NULL){
                first = prev;
                next = root;
            }
            else{
            last = root;
           }
        }
        
        prev = root;
        inorder(root->right);
        
    }
	void recoverTree(TreeNode* root) {
		first = next = last = NULL;
        
        inorder(root);
        if(first && last) swap(first->val,last->val);
        else if(first && next) swap(first->val,next->val);
	}

	
};