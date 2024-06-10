#include <bits/stdc++.h>
using namespace std;

// time = BIG ) of n(sqr)

// int maxDiff(int arr[],int n){
//     int res=arr[1]-arr[0];
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             res=max(res,arr[j]-arr[i]);
//         }
//         return res;
//     }
// }

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0], minval = arr[0];
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minval);
        minval = min(minval, arr[j]);
    }
    return res;
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
    cout << maxDiff(arr, n);
    return 0;
}