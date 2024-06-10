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
void printmiddle(node*head){
    if(head==NULL){
        return ;
    }
    int count=0;
    node*curr;
    for(curr=head;curr!=NULL;curr=curr->next){
        count++;
    }
    curr=head;
    for(int i=0;i<count/2;i++){
        curr=curr->next;
    }
    cout<<curr->data;

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
    printmiddle(head);
    // printList(head);
    return 0;
}