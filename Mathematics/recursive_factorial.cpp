#include <bits/stdc++.h>
using namespace std;
//NO TAIL RECURSION 


// int fact(int n){
//     if(n==0||n==1) {return 1;}
//     else{

//     return n*fact(n-1);}
// }


// TAIL RECUSRSION

int fact(int n,int k){
    if(n==0||n==1) return k;
    return fact(n-1,k*n);
}
int main(){
    int n;
    int k=1;
    cout<<"Enter the number to find the factorial of A NUMber :";
    cin>>n;
    cout<<fact(n,k)<<endl;

    return 0;
}