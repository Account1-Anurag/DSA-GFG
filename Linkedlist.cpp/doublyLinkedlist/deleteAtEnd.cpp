#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*prev;
    node*next;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
node *deleteAtEnd(node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
         delete head;
         return NULL;
    }
    else{
        node*curr=head;
        while(curr->next!=NULL){
            curr=curr->next;


        }
        curr->prev->next=NULL;
        curr->prev=NULL;
        delete curr;
        return head;
    }
}
void display(node *head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";
}
int main(){
    node*head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node (30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    display(head);
    cout<<endl;
    head=deleteAtEnd(head);
    display(head);
    return 0;
}