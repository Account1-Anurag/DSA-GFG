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
int getMax(node*root){
    if(root==NULL){
        return INT_MIN;
    }
    else{
        return max(root->key,max(getMax(root->left),getMax(root->right)));
    }
}

// Time Complexity = Big o of N
// Space Complexity = Big o of H
int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(70);
    root->right->right->right = new node(80);
    cout<<getMax(root);
    return 0;
}