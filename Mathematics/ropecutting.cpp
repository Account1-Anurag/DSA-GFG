#include<bits/stdc++.h>
using namespace std;
int maxpieces(int n,int a,int b,int c){
    if(n==0)return 0;
    if(n<0)return -1;
    int res=max(maxpieces(n-1,a,b,c),maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c));
    if(res==(-1))
    return -1;
    return res+1;
}
int main(){
    int n,a,b,c;
    cout<<"Enter the length of the rope : "<<endl;
    cin>>n;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    cout<<"Enter the value of c : "<<endl;
    cin>>c;
    cout<<maxpieces(n,a,b,c);
    return 0;
}