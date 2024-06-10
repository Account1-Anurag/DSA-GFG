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
node*reverseList(node*head){
    vector<int>anurag;
    for(node*curr=head;curr!=NULL;curr=curr->next){
        anurag.push_back(curr->data);
    }
    for(node*curr=head;curr!=NULL;curr=curr->next){
        curr->data=anurag.back();
        anurag.pop_back();
    }
    return head;
}
node *reverselist(node*head){
    node*curr=head;
    node*prev=NULL;
    while(curr!=NULL){
        node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
node *recursiveReverseList(node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node *rest_head=recursiveReverseList(head->next);
    node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}
node*recursivereverselist(node*curr,node*prev){
    if(curr=NULL){
        return NULL;
    }
    node*next=curr->next;
    curr->next=prev;
    recursivereverselist(next,curr);
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
    head=reverseList(head);
    cout<<endl;
    printList(head);
    cout<<endl;
    head=reverselist(head);
    printList(head);
    head=recursiveReverseList(head);
    cout<<endl;
    printList(head);
    cout<<endl;
    node*curr=head;
    node*prev=NULL;
    recursivereverselist(curr,prev);
    printList(head);
   
    return 0;
}