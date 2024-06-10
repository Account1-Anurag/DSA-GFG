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
int maxWidth(node *root){
    if(root==NULL){
        return 0;
    }
    queue<node*>q;
    q.push(root); 
    int ans=0;
    while(q.empty()==false){
        int count=q.size();
        int ans=max(ans,count);
        for(int i=0;i<count;i++){
            node*curr=q.front();
            q.pop();
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        return ans;
    }
}
int main(){
    node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);
	root->left->right=new node(50);
	root->right->left=new node(60);
    cout<<maxWidth(root);
    int main;
    return 0;
}