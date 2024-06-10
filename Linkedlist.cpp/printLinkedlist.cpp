#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main(){
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    printList(head);
    /*
    we add two times print list but it agains print the same even the next pointer is pointing to NULL that is bcoz there is two head variable one is connected to main thread and second is connected to linked list variable
    */
    printList(head);
    /*

    // simple linked list creation
    
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);

    
    */


    return 0;
}