#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLUTION

// int largestEle(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool flag=true;
//         for(int j=0;j<n;j++){
//             if(arr[j]>arr[i]){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag==true)return i;
//     }
//     return -1;
    
// }

// EFFICIENT SOLUTION

int largestEle(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
       
    }
     return res;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number to input in array : ";
        cin>>arr[i];
        
    }
    cout<<largestEle(arr,n);
    return 0;
}