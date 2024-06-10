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
bool isChildren(node*root){
    if(root==NULL){
        return true;
    }
    if(root->left==NULL&&root->right==NULL){
        return true;
    }
    int sum=0;
    if(root->left!=NULL){
        sum+=root->left->key;
    }
    if(root->right!=NULL){
        sum+=root->right->key;
    }
    return (sum==root->key&&isChildren(root->left)&&isChildren(root->right));
}
int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(70);
    root->right->right->right = new node(80);
    cout<<isChildren(root);
    return 0;
}