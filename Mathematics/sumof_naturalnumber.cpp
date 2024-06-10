#include <bits/stdc++.h>
using namespace std;
int sumofNatural(int n){
    if(n==0)return 0;
    return n+sumofNatural(n-1);
}
int main(){
      int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<sumofNatural(n)<<endl;
  

    return 0;
}