#include <bits/stdc++.h>
using namespace std;
// int remDub(int arr[], int n)
// {
//     int temp[n];
//     temp[0] = arr[0];
//     int res = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (temp[res - 1] != arr[i])
//         {
//             temp[res] = arr[i];
//             res++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//         arr[i] = temp[i];
//     return res;
// }
int remDub(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
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
    cout << "Elements in array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "No. of elements in new array :";
    cout << remDub(arr, n);
    int t=0;
    t+=remDub(arr,n);
    cout << "Elements in array after deleting dublicates : " << endl;
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}