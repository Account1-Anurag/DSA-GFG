#include <bits/stdc++.h>
using namespace std;
int insert(int arr[],int n,int x,int capacity,int position){
    if(n==capacity)return n;
    int index=position-1;
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
        arr[index]=x;
    }
    return n+1;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    int e;
    cout<<"Enter the number of elements to fill in array ";
    cin>>e;
    for(int i=0;i<e;i++){
        cin>>arr[i];
    }
    
    cout<<endl;
    int capacity=n-e;
    int x;
    cout<<"Enter the number to insert in array :";
    cin>>x;
    int position;
    cout<<"Enter the position to insert ";
    cin>>position;
    cout<<insert(arr,n,x,capacity,position);
    for(int i=0;i<=e;i++){
        cout<<"Elements in array :"<<arr[i]<<" "<<endl;
    }
    return 0;
}