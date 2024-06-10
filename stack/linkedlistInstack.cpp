#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
struct Mystack{
    node*head;
    int siz;
    Mystack(){
        head=NULL;siz=0;
    }
    void push(int x){
        node*temp=new node(x);
        temp->next=head;
        head=temp;
        siz++;
    }
    int pop(){
        if(head==NULL)
        return INT_MAX;
        int res=head->data;
        node*temp=head;
        head=head->next;
        delete(temp);
        siz--;
        return res;
    }
    int size(){
        return siz;
    }
    bool isEmpty(){
        if(siz>0)return 0;
        else return 1;
    }
    int peek(){
        if(head==NULL){
            return INT_MAX;
        }
        return head->data;
    }
};
int main(){
    stack<int>sh;
    Mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;//30
    cout<<s.pop()<<endl;//30
    cout<<s.size()<<endl;//2
    s.push(40);
    cout<<s.peek()<<endl; //40
    cout<<s.isEmpty()<<endl;//0
    return 0;
}