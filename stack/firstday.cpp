#include <bits/stdc++.h>
using namespace std;
// struct Mystack{
//     vector<int>v;
//     void push(int x){
//         v.push_back(x);
//     }
//     int pop(){
//         int res=v.back();
//         v.pop_back();
//         return res;
//     }
//     int size(){
//         return v.size();
//     }
//     bool isEmpty(){
//         return v.empty();
//     }
//     int peek(){
//         return v.back();
//     }
// };
// // int main(){
//     Mystack s;
//     cout<<s.pop()<<endl;
//     cout<<s.peek()<<endl;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     return 0;
// }
struct Mystack{
    int *arr;
    int cap;
    int top;
    Mystack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap-1){
            
        }
        top++;
        arr[top]=x;
    }
    int pop(){
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    bool isEmpty(){
        return (top==-1);
    }

};
int main(){
    
}
