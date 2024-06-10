#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node*left;
    node*right;
    node(int data){
        key=data;
        left=right=NULL;
    }
};
bool findpath(node*root,vector<node*>&p,int n){
    if(root==NULL)return NULL;
    p.push_back(root);
    if(root->key==n)return true;
    if(findpath(root->left,p,n)||findpath(root->right,p,n))return true;
    p.pop_back();
    return false;
}
node*LCA(node*root,int n1,int n2){
    
    vector<node*>path1;
    vector<node*>path2;
    if(findpath(root,path1,n1)==false||findpath(root,path2,n2)==false)return NULL;
    for(int i=0;i<path1.size()-1&&i<path2.size()-1;i++){
        if(path1[i+1]!=path2[i+1]){
            return path1[i];
        }
        
    }
    
return NULL;
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