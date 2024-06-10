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
node *insertAtEnd(node *head,int val){
    node*temp=new node(val);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        node *curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
}
/*
//efficient solution
node *insertAtEndd(node*head,int val){
    node *temp=new node(val);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}
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
    head=insertAtEnd(head,100);
    print(head);
    
    return 0;
}