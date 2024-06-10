#include <bits/stdc++.h>
using namespace std;
long long fibo(long long  n){
    
    if(n==0){
     return 0;}
    if(n==1)return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    long long  n;
    cout<<"Enter the number for fibonacci :";
    cin>>n;
    cout<<fibo(n);
    return 0;
}