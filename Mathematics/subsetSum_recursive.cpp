#include <bits/stdc++.h>
using namespace std;
int countsubsets(int arr[],int n,int sum){
    if(n==0)
    return (sum==0)?1:0;
    return countsubsets(arr,n-1,sum)+countsubsets(arr,n-1,sum-arr[n-1]);
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    int sum;
    countsubsets(arr,n,sum);
    return 0;
}