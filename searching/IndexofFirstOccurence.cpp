#include <bits/stdc++.h>
using namespace std;
// int firstOccurence(int arr[],int n,int low ,int high,int x){

// // RECURSIVE APPROACH

    // if(low>high)return -1;
    // int mid=(low+high)/2;
    // if(arr[mid]>x) return firstOccurence(arr,n,low,mid-1,x);
    // else if(arr[mid]<x) return firstOccurence(arr,n,mid+1,high,x);
    // else{
    //     if(mid==0||arr[mid-1]!=arr[mid]){
    //         return mid;
    //     }
    //     else{
    //         return firstOccurence(arr,n,low,mid-1,x);
    //     }
    // }

// // ITERATIVE APPROACH


// }
int firstOccurence(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]>x)
        high=mid-1; 
        else if(arr[mid]<x)
        low=mid+1;
        else{
            if(mid==0||arr[mid-1]!=arr[mid]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
}
int main(){
    int n;
    // cout << "enter the size of array :" << endl;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        // cout<<"Enter the elements"<<endl;
        cin >> arr[i];
    }
    int x;
    // cout<<"Enter the elements to find their first index";
    cin>>x;
    // int low=0;
    // int high=n-1;
    // cout<<firstOccurence(arr,n,low,high,x);
    cout<<firstOccurence(arr,n,x);
    return 0;
}