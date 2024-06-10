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
node *deleteAtHead(node *head){
    if(head==NULL){
        return NULL;
    }
    else{
        node*temp=head->next;
        delete head;
        return temp;
    }
}

void printList(node *temp){
    node *curr=temp;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    deleteAtHead(head);
    printList(head);
    return 0;
}