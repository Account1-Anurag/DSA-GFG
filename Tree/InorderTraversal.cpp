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

// Time complexity of this program is Big O of 1
// Space Complexity of this program is big O of H

void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);

    }
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    inorder(root);
    return 0;
}