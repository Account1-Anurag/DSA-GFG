#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++)
    if(arr[i]==x)return i;
    return -1;
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
     for(int i=0;i<n;i++){
        cout<<"Elements in array : "<<arr[i]<<" ";
        
      
    }
    cout<<endl;
    int x;
    cout<<"Enter the number to find :";
    cin>>x;
    cout<<search(arr,n,x);

    
    return 0;
}