#include <bits/stdc++.h>
using namespace std;
void printFreq(int arr[],int n){
    int freq=1,i=1;
    while(i<n){
        while(i<n&&arr[i]==arr[i-1]){
            freq++;

            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1||arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" "<<"1"<<endl;
    }
}
int main(){
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number to input in array : ";
        cin >> arr[i];
    }
    printFreq(arr,n);
    return 0;
}