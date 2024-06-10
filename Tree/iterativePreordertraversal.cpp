#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
void iterativePreOrder(Node*root){
    if(root==NULL)return ;
    stack<Node*>anu;
    Node*curr=root;
    while(curr!=NULL||anu.empty()==false){
        while(curr!=NULL){
            cout<<curr->data<<" ";
            if(curr->right!=NULL){
                anu.push(curr->right);
            }
            curr=curr->left;
        }
        if(anu.empty()==false){
            curr=anu.top();
            anu.pop();
        }
    }

}

int main(){
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    iterativePreOrder(root);
    return 0;
}

void IterativePreorder(Node*root){
    if(root==NULL){
        return;
    }
    stack<Node*>st;
    st.push(root);
    while(st.empty()==false){
        Node*curr=st.top();
        cout<<curr->data<<" ";
        st.pop();
        if(curr->right!=NULL)st.push(curr->right);
        if(curr->left!=NULL)st.push(curr->left);
    }
}