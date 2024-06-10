#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next=NULL;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *insertATposition(node*head,int pos,int x){
    node *temp=new node(x);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    node*curr=head;
    for(int i=0;i<=pos-2&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
// void printList(node*head){
//     node*curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
// }
void printList(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main(){
    node *head=NULL;
    insertATposition(head,1,10);
    insertATposition(head,2,20);
    insertATposition(head,3,30);
    insertATposition(head,4,40);
    insertATposition(head,5,50);
    printList(head);
    return 0;
}