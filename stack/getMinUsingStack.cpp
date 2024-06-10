/*

// Question Description

In this problem we are required to design a Stack that can implement the regular stack operations ie. push( ), pop( ), isEmpty( ), size( ) etc. along with the getMin( ) operation ( to fetch minimum element present in the stack) efficiently. We will first look at a Naive approach for doing this, followed by an Efficient Approach using an auxilary stack.*/

#include <bits/stdc++.h>
using namespace std;
struct Mystack{
    stack<int>mr;
    stack<int>ax;
    void push(int x){
        if(mr.empty()){
            mr.push(x);
            ax.push(x);
            return;
        }
        mr.push(x);
        if(ax.top()>mr.top()){
            ax.push(x);
        }
    }
    void pop(){
        if(mr.empty()){
            return;
        }
        int t=mr.top();
        mr.pop();
        if(ax.top()>=t){
            ax.pop();
        }
    }
    int top(){
        return mr.top();
    
    }
    int getMin(){
        return ax.top();
    }

};
int main(){
   
    Mystack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getMin();
    return 0;
}