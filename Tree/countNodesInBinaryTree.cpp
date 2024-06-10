#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + countNode(root->left) + countNode(root->right);
}
// int CountNode(Node *root)
// {
//     int lh = 0;
//     int rh = 0;

//     Node *curr = root;
//     while (curr != NULL)
//     {
//         lh++;
//         curr = curr->left;
//     }
//     curr = root;
//     while (curr != NULL)
//     {
//         rh++;
//         curr = curr->right;
//     }
//     if (lh == rh)
//     {
//         return pow(2, lh) - 1;
//     }
//     else
//     {
//         return 1 + CountNode(root->left) + CountNode(root->right);
//     }
// }
int CountNode(Node *root)
{
    int lh = 0, rh = 0;
    Node *curr = root;
    while (curr != NULL)
    {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
    {
        return pow(2, lh) - 1;
    }
    else
    {
        return 1 + countNode(root->left) + countNode(root->right);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout << CountNode(root);
    return 0;
}