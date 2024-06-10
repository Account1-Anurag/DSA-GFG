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
    while(curr!=nullptr){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
node *insertATposition(node*head,int pos,int x){
    node *temp=new node(x);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    node*curr=head;
    for(int i=1;i<=pos-2&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
node *insertATend(node *head , int z){
    node *temp=new node(z);
    if(head==NULL){
        return temp;
    }
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
node *insertAtHead(node *head,int z){
    node *temp=new node(z);
    // if(head==NULL){
    //     return temp;
    // }
    
    temp->next=head;
    return temp;
}
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
node *deleteAtEnd(node *head){
    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        delete head;
        return NULL;
    }
    
        node*curr=head;
        while(curr->next->next==NULL){
            curr=curr->next;
        }
        delete (curr->next);
        curr->next=NULL;
         return head;
    
}

int main(){
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    insertATposition(head,2,70);
    insertATend(head,100);
    head=insertAtHead(head,150);
    // deleteAtHead(head);
    
    printList(head);
    // cout<<endl;
    
    // printList(head);

    /*

    // simple linked list creation
    
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);

    
    */
    return 0;
}