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
node *revers(node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*prev =NULL;
    node*curr=head;
    while(curr->next!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->next;
    }
    return prev->prev;
}
int main(){
    
    return 0;
}