#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *prev;
    node *next;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
node* insertAthead(node *head,int val){
    node*temp=new node(val);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    else{
        temp->prev=head->prev;
        temp->next=head;
        head->prev=temp;
        head->prev->next=head;
    }
}
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
int main(){
    node *head=new node (10);
    node *temp1=new node (20);
    node *temp2=new node (30);
    node *temp3=new node (40);
    node *temp4=new node (50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=head;
    head->prev=temp4;
    temp1->prev=head;
    temp2->prev=temp1;
    temp3->prev=temp2;
    temp4->prev=temp3;
    print(head);
    cout<<endl;
    head=insertAthead(head,100);
    display(head);
    return 0;
}