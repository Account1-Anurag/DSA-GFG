#include <bits/stdc++.h>
using namespace std;

//METHOD-1

// void LrotateOne(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
// }
// void Lrotate(int arr[], int n, int d)
// {
//     for (int i = 0; i < d; i++)
//     {
//         LrotateOne(arr, n);
//     }
// }

//METHOD-2

// void Lrotate(int arr[],int n,int d){
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d;d<n;i++){
//         arr[arr[i-d]=arr[i]];
//     }
//     for(int i=0;i<d;i++){
//         arr[n-d+1]=temp[i];
//     }
// }

//METHOD-3

void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void Lrotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number to input in array : ";
        cin >> arr[i];
    }
    int d;
    cout << "Enter the No. digits to rotate :";
    cin >> d;
    Lrotate(arr, n, d);
    cout << "Elements in array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}