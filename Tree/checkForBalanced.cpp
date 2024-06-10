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
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (max(height(root->left), height(root->right)) + 1);
}
/*
bool isBalanced(node *root){
    if(root==NULL)return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1&&isBalanced(root->left)&&isBalanced(root->right));
}
*/
int isBalanced(node *root)
{
    if (root == NULL)
        return 0;
    int lh = isBalanced(root->left);
    if (lh == -1)
    {
        return -1;
    }
    int rh = isBalanced(root->right);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(lh - rh) > 1)
    {
        return -1;
    }
    else
    {
        return max(lh, rh) + 1;
    }
}
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(70);
    root->right->left= new node(100);
    root->right->left->left= new node(100);
    root->right->left->right= new node(100);
    root->right->right->right = new node(80);
    root->right->right->left = new node(60);
    cout << isBalanced(root);
    return 0;
}