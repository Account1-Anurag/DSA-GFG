#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void display(node *head){
    if(head==NULL){
        return ;
    }
    node*curr=head;
    cout<<curr->data<<"->";
    while(curr->next!=head){
        curr=curr->next;
        cout<<curr->data<<"->";
        
        
    }
   
}
void print(node*head){
    if(head==NULL)return ;
    node *curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    } while (curr!=head);
    
}
node *deleteAtHead(node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        node *curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=head->next;
        delete head;
        return curr->next;
        
    }
}
/*
      head->data=head->next->data;
      node *temp=head->next;
      head->next=head->next->next;
      delete temp;
      return head;  
        */
int main(){
    node*head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node(30);
    node*temp3=new node(40);
    node*temp4=new node(50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=head;
    
    display(head);
    head=deleteAtHead(head);
    cout<<endl;
    print(head);
    
    return 0;
}