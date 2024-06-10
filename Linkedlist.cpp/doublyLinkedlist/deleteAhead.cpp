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
node *deleteAhead(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}
// node *deleteAhead(node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next == NULL){
//         delete head;
//         return NULL;
//     }
//     else{
//         node* temp=head;
//         head=head->next;
//         head->prev=NULL;
//         delete temp;
//         return head;
//     }
// }
void printt(node *head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
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
node *insertBegin(node *head,int data){
    node *temp=new node(data);
    temp->next=head;
    if(head!=NULL)
    head->prev=temp;
    return temp;
}

int main(){
    node*head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node (30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printt(head);
    cout<<endl;
    display(head);
    head=insertBegin(head,50);
    cout<<endl;
    display(head);
    head=deleteAhead(head);
    printt(head);
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node* prev;
//     node* next;
//     node(int x){
//         data=x;
//         prev=NULL;
//         next=NULL;
//     }
// };
// node *deleteAhead(node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next == NULL){
//         delete head;
//         return NULL;
//     }
//     else{
//         node* temp=head;
//         head=head->next;
//         head->prev=NULL;
//         delete temp;
//         return head;
//     }
// }
// void printt(node *head){
//     node* curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
// }
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// node *insertBegin(node *head, int data){
//     node *temp=new node(data);
//     temp->next=head;
//     if(head!=NULL){
//         head->prev=temp;
//     }
//     return temp;
// }

// int main(){
//     node* head=new node(10);
//     node* temp1=new node(20);
//     node* temp2=new node (30);
//     head->next=temp1;
//     temp1->prev=head;
//     temp1->next=temp2;
//     temp2->prev=temp1;
//     printt(head);
//     cout<<endl;
//     display(head);
//     head = insertBegin(head, 50);
//     cout<<endl;
//     display(head);
//     head = deleteAhead(head);
//     printt(head);
//     return 0;
// }
