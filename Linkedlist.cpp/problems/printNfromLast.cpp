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
void printListofN(node*head,int n){
    
    int count=0;
    for(node*curr=head;curr!=NULL;curr=curr->next){
        count++;
    }
    if(count<n){
        return;
    }
    node*temp=head;
    for(int i=0;i<count-n;i++){
        temp=temp->next;
    }
    cout<<temp->data;

}
void printListfromN(node *head,int n){
    node*temp=head;
    if(head==NULL)return;
    node*curr=head;
    for(int i=0;i<n;i++){
        if(curr==NULL){
            return;
        }
        curr=curr->next;
    }
    while(curr!=NULL){
        curr=curr->next;
        temp=temp->next;
    }
    cout<<temp->data;
}
int main(){
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    node *temp3=new node(40);
    node *temp4=new node(50);
    node *temp5=new node(50);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;
    printList(head);
    cout<<endl;
    printListofN(head,5);
    printListfromN(head,5);
    // printList(head);
    return 0;
}