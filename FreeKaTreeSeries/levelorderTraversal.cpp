#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct Node{
    int val;
    struct Node* left;
    struct Node* right;
    Node(int data){
        val = data;
        left = right = NULL;
    }
};


    vector<vector<int>>  levelOrder(Node *head){
        vector<vector<int>>ans;
        if(head == NULL){
            return ans;
        }
        queue<Node*>q;
        q.push(head);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                Node* node = q.front();
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->left);
                }
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;   
    }



int main(){
    struct Node * root =  new Node(1);
    root->left=new Node(2);
    root->right= new Node(3);
    root->left->right = new Node(5);

    
    vector<vector<int>> finalAns = levelOrder(root);
  
    
}
