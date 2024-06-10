#include <bits/stdc++.h>
using namespace std;
// void print1toN(int N){
    
// // non TAIL RECURSIVE 

//     if(N==0)return;
//     print1toN(N-1);
//     cout<<N<<" ";

// // 
    
// }
void print1toN(int N,int k){
    if(N==0)return;
    cout<<k<<" ";
    print1toN(N-1,k+1);
    
}
int main(){
    int n;
    int k=1;
    cout<<"Enter the number :";
    cin>>n;
    print1toN(n,k);

    return 0;
}