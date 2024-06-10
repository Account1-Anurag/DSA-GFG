#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int data){
        key=data;
        left=right=NULL;
    }
};
void IterativeInorder(Node*root){
    stack<Node*>s;
    Node*curr=root;
    while(curr!=NULL&&s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr=curr->right;
    }
}
int main(){
    Node*root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    root->right->left=new Node(60);
    IterativeInorder(root);
    return 0;
}