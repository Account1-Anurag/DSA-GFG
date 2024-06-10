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
/*

// RECURSIVE APPROACH
// TIME COMPLEXITY = BIG O OF N
// SPACE COMPLEXITY = BIG O OF H

int maxi=0;
void printLeft(node *root,int level){
    if(root==NULL){
        return ;
    }
    if(maxi<level){
        cout<<root->key<<" ";
        maxi=level;
    }
    printLeft(root->left,level+1);
    printLeft(root->right,level+1);
}
void printLeftView(node*root){
    printLeft(root,1);
}
*/

// ITERATIVE APPROACH
//Time Complexity = Big O of N
//Space Complexity = Big O of N
void printLeftView(node*root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    
    while(q.empty()==false){
        int n=q.size();
        for(int i=0;i<n;i++){
            node*curr=q.front();
            q.pop();
            if(i==0){
                cout<<curr->key<<" ";
            }
            
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(70);
    root->right->right->right = new node(80);
    printLeftView(root);
    return 0;
}