#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node*left;
    node*right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
int getSize(node*root){
    if(root==NULL){
        return 0;
    }
    return 1+getSize(root->left)+getSize(root->right);
}

//TIME COMPLEXITY = bigo OF N
// sPACE cOMPLEXITY = big O OF H
int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(70);
    root->right->right->right = new node(80);
    cout<<getSize(root);
    return 0;
}