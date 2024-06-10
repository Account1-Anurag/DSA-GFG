#include <bits/stdc++.h>
using namespace std;
void NextGreater(int arr[],int n){
    for(int i=0;i<n;i++){
        int j;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
            else{
                cout<<"-1"<<" ";
                break;
            }
            
        }
        // if(j==n){
        //     cout<<"-1"<<endl;
        // }
    }
    // cout<<"-1"<<" ";
}
void NextGreaterr(int arr[],int n){
    stack<int>s;
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false&&arr[i]>=s.top()){
            s.pop();
        }
        int nextGreater=(s.empty())?-1:(s.top());
        cout<<nextGreater<<" ";
        s.push(arr[i]);
    }
}
int main(){
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    // int arr[]={30,25,20,15};
    // int n=4;
    NextGreaterr(arr,n);
    return 0;
}