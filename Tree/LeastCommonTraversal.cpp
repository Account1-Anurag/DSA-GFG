#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node*left;
    node*right;
    node(int k){
        k=key;
        left=right=NULL;
    }
};
node *LCA(node * root , int n1 , int n2){
    if(root==NULL)return NULL;
    if(root->key==n1||root->key==n2){
        return root;
    }
    node*LCA1=LCA(root->left,n1,n2);
    node*LCA2=LCA(root->right,n1,n2);
    if(LCA1!=NULL&&LCA2!=NULL){
        return root;
    }
    if(LCA1!=NULL){
        return NULL;
    }
    else{
        return LCA2;
    }
}
int main(){
    node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
	int n1=20,n2=50;
	
	node *ans=LCA(root,n1,n2);
	cout<<"LCA: "<<ans->key;
    return 0;
}