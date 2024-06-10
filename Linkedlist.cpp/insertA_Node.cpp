// #include <bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node*next=NULL;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// node *insertAtHead(node *head,int z){
//     node *temp=new node(z);
//     if(head==NULL){
//         return temp;
//     }
    
//     temp->next=head;
//     return temp;
// }
// node *insertATend(node *head , int z){
//     node *temp=new node(z);
//     if(head==NULL){
//         return temp;
//     }
//     node *curr=head;
//     while(curr->next!=NULL){
//         curr=curr->next;
//     }
//     curr->next=temp;
//     return head;
// }
// node *insertATposition(node*head,int pos,int x){
//     node *temp=new node(x);
//     if(pos==1){
//         temp->next=head;
//         return temp;
//     }
//     node*curr=head;
//     for(int i=1;i<=pos-2&&curr!=NULL;i++){
//         curr=curr->next;
//     }
//     if(curr==NULL){
//         return head;
//     }
//     temp->next=curr->next;
//     curr->next=temp;
//     return head;
// }


// void printList(node *head){
//     node *curr=head;
//     while(curr!=NULL){
//         cout<<(curr->data)<<" ";
//         curr=curr->next;
//     }
// }
// int main(){
//     node *head=new node(20);
//     insertAtHead(head,10);
//     // insertAtHead(head,20);
//     // insertAtHead(head,30);
//     insertATposition(head,2,50);
//     printList(head);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    
	    if((2*n+1)%3==0){
	        cout<<"YES"<<" "<<(2*n+1)/3<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}