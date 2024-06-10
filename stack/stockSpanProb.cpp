#include <bits/stdc++.h>
using namespace std;

void printSpan(int arr[],int n){
    for(int i=0;i<n;i++){
        int span =1;
        for(int j=i-1;j>=0&&arr[j]<=arr[i];j--){
            span++;
            // cout<<span<<" ";
            cout<<span<<" ";
        }
    }
}


int main(){
    int n;
    cout<<"Enter the Number of elements ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements to push in array :";
        cin>>arr[i];
    }
    printSpan(arr,n);
    cout<<endl;
    
    
    return 0;
}
