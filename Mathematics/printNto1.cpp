#include <bits/stdc++.h>
using namespace std;
void printNto1(int N){
    if(N==0)
    return;
    cout<<N<<" ";
    printNto1(N-1);
}
int main(){
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    printNto1(n);


    return 0;
}