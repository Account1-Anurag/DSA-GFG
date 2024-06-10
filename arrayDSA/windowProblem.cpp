#include <bits/stdc++.h>
using namespace std;
// int maxSum(int arr[],int n,int k){
//     int res=INT_MIN;
//     for(int i=0;i=i+k-1;i++){
//         int curr=0;
//         for(int j=0;j<k;j++){
//             curr+=arr[i+j];
//             res=max(res,curr);
//         }
//         return res;
//     }
// }
int maxSum(int arr[],int n,int k){
    int curr=0;
    for(int i=0;i<k;i++){
        curr+=arr[i];
    }
    int res=curr;
    for(int i=k;i<n;i++){
        curr=curr+arr[i]-arr[i-k];
        res=max(res,curr);
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number to input in array : ";
        cin>>arr[i];
        
    }
    int k;
    cout<<"Enter the value of k ";
    cin>>k;
    cout<<maxSum(arr,n,k);
    return 0;
}