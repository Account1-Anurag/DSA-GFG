#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node*left;
    node*right;
    node(int k){
        key=k;
        left=NULL;
        right=NULL;
    }
};
// int height(node *root){
//     if(root==NULL){
//         return 0;
//     }
//     else{
//         return max(height(root->left),height(root->right))+1;
//     }
// }
// void NodeAtk(node *root,int k){
//     if(root==NULL){
//         return;
//     }
  
//         if(k==0){
//             cout<<root->key<<" ";
//         }
//         else{
//             NodeAtk(root->left,k-1);
//             NodeAtk(root->right,k-1);

//         }
    
// }
// void levelOrderTraversal(node*root,height(root)){
//     int k=height(root);
//     for(int i=height(root);i>=0;i--){
        
//         NodeAtk(root,k);
//     }
// }
void printordertraversal(node*root){
    if(root==NULL){
        return;
    }
    queue<node *>q;
    q.push(root);
    while(q.empty()==false){
        node*curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
// Time complexity = BIGO of N;
// Space Complexity = BIGO of N;
int main(){
    node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);
	root->left->right=new node(50);
	root->right->right=new node(70);
	root->right->right->right=new node(80);
   
    printordertraversal(root);
    return 0;
}