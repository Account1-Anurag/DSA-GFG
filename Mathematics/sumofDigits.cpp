#include <bits/stdc++.h>
using namespace std;

//recusrsive approach

int getsum(int n){
    if(n==0)return 0;
    return getsum(n/10)+n%10;
}

//iterative approach
//   TIME COMPLEXITY - BIG0(N);
//   SPACE COMPLEXITY - BIG0(1);
/*
int getsum(int n){
    int anurag=0;
    while(n>=0){
        anurag=anurag+n%10;
        n=n/10;
    }
    return n;
}
*/

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<getsum(n);
    return 0;
}