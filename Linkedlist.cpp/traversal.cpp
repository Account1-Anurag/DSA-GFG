#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
int main()
{
    int n;
    cin >> n;
    node *head = NULL; // Initialize the head pointer to NULL
    node *temp = head;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        node *newNode = new node(x);

        if (head == NULL)
        {
            // If the list is empty, set the new node as the head
            head = newNode;
        }
        else
        {
            // Otherwise, traverse the list to the last node and add the new node
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Now, you have created a linked list with 'n' nodes.

    return 0;
}