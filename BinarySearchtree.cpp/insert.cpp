#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};
Node*insert(Node*root,int k){
    if(root==NULL){
        return new Node(k);
    }
    else if(k>root->data){
        root->right= insert(root->right,k);
    }
    else {
        root->left= insert(root->left,k);
    }
    return root;
}
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);    
    }
} 
int main(){
    Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	
	root=insert(root,x);
	inorder(root);
    return 0;
}