#include <bits/stdc++.h>
using namespace std;

//NAIVE APPROACH

// int getLargest(int arr[],int n){
//     int res=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[res]){
//             res=i;
//         }
       
//     }
//      return res;
// }
// int secondLargest(int arr[],int n){
//     int largest=getLargest(arr,n);
//     int res=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=arr[largest]){
//             if(res==-1)res=i;
//             else if(arr[i]>arr[res])res=i;
//         }
//     }
//     return res;
// }

//EFFICIENT APPROACH

int secondLargest(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
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
    // getLargest(arr,n);
    cout<<secondLargest(arr,n);

    return 0;
}