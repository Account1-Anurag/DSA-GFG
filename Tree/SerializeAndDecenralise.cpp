#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};
const int EMPTY=-1;
void serialize(Node*root,vector<int>&ans){
    if(root==NULL){
        ans.push_back(E MPTY);
        return;
    }
    ans.push_back(root->key);
    serialize(root->left,ans);
    serialize(root->right,ans);
}
int index=0;
Node*reSerialize(vector<int>&ans){
    if(index==ans.size()){
        return NULL;
    }
    int val=ans[index];
    index++;
    if(val==EMPTY){
        return NULL;
    }
    Node*root=new Node(val);
    root->left=reSerialize(ans);
    root->right=reSerialize(ans);
    return root;
}
int main(){
    
    return 0;
}