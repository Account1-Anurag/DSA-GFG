// #include <bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node*next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// int main(){
//     int x;
//     cout<<"Enter the size of linked list ";
//     cin>>x;
//     node*head=NULL;
//     node*curr=head;
//     for(int i=1;i<=x;i++){
//         int p;
//         cout<<"enter the elements";
//         cin>>p;
        
//         if(head==NULL){
//             curr= new node(p);
//         }
//         else{
//             curr=new node(p);
//             curr=curr->next;
//         }
//     }
//     node*print =head;
//     while(print!=NULL){
//         cout<<print->data;
//         curr=print->next;
//     }
//     return 0;
// }
/*
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList myList;

    int numNodes;
    std::cout << "Enter the number of nodes: ";
    std::cin >> numNodes;

    for (int i = 0; i < numNodes; ++i) {
        int val;
        std::cout << "Enter value for node " << i + 1 << ": ";
        std::cin >> val;
        myList.insert(val);
    }

    std::cout << "The linked list is: ";
    myList.display();

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
class linkedList{
    private:
    node*head;
    public:
    linkedList(){
        head=NULL;
    }
    void insert(int val){
        node*newNode=new node(val);
        if(head== NULL){
            head=newNode;
        }
        else{
            node*currr=head;
            // node*temp=new node(val);
            while(currr->next!=NULL){
                
                currr=currr->next;
            }
            currr->next=newNode;
            
        }
    }
    void display(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    linkedList mylist;
    int numNodes;
    cout<<"Enter the number of nodes ";
    cin>>numNodes;
    for(int i=0;i<numNodes;i++){
        int val;
        cout<<"Enter the elements";
        cin>>val;
        mylist.insert(val);
    }
    mylist.display();
    return 0;
}