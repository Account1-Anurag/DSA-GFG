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
int searchElement(node *head ,int x) {
    int pos=1;
    node *curr=head;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        else{
            curr=curr->next;
            pos++;
        }
    }
    return -1;
}
/*
// recursive approach
int search(node*head,int x){
    int pos=1;
    if(head==NULL){
        return -1;
    }
    node*curr=head;
    if(curr->data==x){
        return 1;
    }
    else{
        int res=search(head->next,x);
        if(res==-1)return -1;
        else{
            return (res+1);
        }
    }

}
*/
int search(node*head,int x){
    if(head==NULL){
        return -1;
    }
    node*curr=head;
    if(curr->data==x){
        return 1;
    }
    else{
        int res=search(head->next,x);
        if(res==-1){
            return -1;
        }
        else{
            return res+1;
        }

    }
}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    // cout<<searchElement(head,20);
    cout<<search(head,20);

    return 0;
}