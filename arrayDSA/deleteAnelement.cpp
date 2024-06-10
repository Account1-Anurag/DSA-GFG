#include <bits/stdc++.h>
using namespace std;
int deleteEle(int arr[],int n,int k){
   int i;
   for(i=0;i<n;i++){
    if(arr[i]==k)break;
   }
   if(i==n)return n;
   for(int j=i;j<n-1;j++){
    arr[j]=arr[j+1];
   }
   return n-1;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Elements to add in array :";
        cin>>arr[i];
    }
    int k;
    cout<<"ENter the number to delete :";
    cin>>k;
    cout<<"New size of array : "<<deleteEle(arr,n,k)<<endl;
    cout<<"New elements in array :"<<endl;
    for(int i=0;i<n-1;i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}