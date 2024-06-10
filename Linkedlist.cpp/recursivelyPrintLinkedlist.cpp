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
void rPrint(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<"->";
    rPrint(head->next);
}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    rPrint(head);
    return 0;
}