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
node *insertAtPosition(node *head,int position,int data){
    node*temp=new node(data);
    if(position==1){
        temp->next=head;
        head->prev=temp;
        return temp;
    }
    else{
        if(head==NULL){
            return temp;
    }
    else{
        node*curr=head;
        for(int i=1;i<=position-2||curr->next==NULL;i++){
            curr=curr->next;
        }
        curr->next->prev=temp;
        temp->next=curr->next;
        curr->next=temp;
        temp->prev=curr;
        return head;
    }


    }
}
void display(node*head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main(){
    node*head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node (30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=insertAtPosition(head,2,100);
    
    display(head);
    return 0;
}