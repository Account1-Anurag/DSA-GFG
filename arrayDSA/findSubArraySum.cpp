#include <bits/stdc++.h>
using namespace std;
// bool isSubsum(int arr[],int n,int sum){
//     for(int i=0;i<n;i++){
//         int curr=0;
//         for(int j=i;j<n;j++){
//             curr+=arr[j];
//             if(curr=sum){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
bool isSubsum(int arr[],int n,int sum){
    int s=0;
    int curr=0;
    for(int e=0;e<n;e++){
        curr+=arr[e];
        while(sum<curr){
            curr-=arr[s];
            s++;
        }
        if(curr==sum){
            return true;
        }
    }
    return false;
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
    int sum;
    cout<<"Enter the value for sum :";
    cin>>sum;
    cout<<isSubsum(arr,n,sum);
    return 0;
}