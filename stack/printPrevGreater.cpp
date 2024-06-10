#include <bits/stdc++.h>
using namespace std;
// void printGreater(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int j;
//         for(j=i-1;j>=0;j--){
//             if(arr[j]>arr[i]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//         }
//         if(j==-1){
//             cout<<-1<<" ";
//         }
//     }
// }
void printGreater(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false&&s.top()<arr[i]){
            s.pop();
        }
        int p=(s.empty())?-1:s.top();
        cout<<p<<" ";
        s.push(arr[i]);

    }
}
void prevGreater(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++){
        while((s.empty()==false)&&s.top()<arr[i]){
            s.pop();
        }
        int p=(s.empty()?-1:s.top());
        cout<<p<<" ";
        s.push(arr[i]);
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
    printGreater(arr,n);
    cout<<endl;
    prevGreater(arr,n);
    
    
    
    return 0;
}