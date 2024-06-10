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
node*mergeTwo(node*a,node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node*start=NULL,*tail=NULL;
    if(a->data<=b->data){
        start=a;tail=a;a=a->next;
    }
    else{
        start=b;tail=b;b=b->next;
    }
    while(a!=NULL&&b!=NULL){
        if(a->data<=b->data){
            tail->next=a;tail=a;a=a->next;
        }
        else{
            tail->next=b;tail=b;b=b->next;
        }
    }
    if(a==NULL){
        tail->next=b;
    }
    else{
        tail->next=a;
    }
    return start;
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

    node *head1=new node(5);
    node *tem1=new node(25);
    node *tem2=new node(35);
    node *tem3=new node(45);
    node *tem4=new node(55);
    node *tem5=new node(55);

    head1->next=tem1;
    tem1->next=tem2;
    tem2->next=tem3;
    tem3->next=tem4;
    tem4->next=tem5;
    node*a=head;
    node*b=head1;
    printList(head);
    cout<<endl;
    printList(head1);
    cout<<endl;
    mergeTwo(a,b);
    printList(head);
    
 
    // printList(head);
    return 0;
}