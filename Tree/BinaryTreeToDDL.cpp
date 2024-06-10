#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// node* prev=NULL;
node* BinaryToDDl(node*root){
    if(root==NULL)return root;
    static node*prev =NULL;
    node*head=BinaryToDDl(root->left);
    if(prev==NULL)head=root;
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    BinaryToDDl(root->right);
    return head;
}
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<"->";
        curr=curr->right;
    }cout<<endl;
}
int main(){
    node *root=new node(10);
	root->left=new node(5);
	root->right=new node(20);
	root->right->left=new node(30);
	root->right->right=new node(35);
	
	node *head=BinaryToDDl(root);
	printlist(head);
    return 0;
}