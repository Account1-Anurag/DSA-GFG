#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                return false;
    return true;
}

// EFFICIENT SOLUTION

// bool isSorted(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[i - 1])
//             return false;
//     }
//     return true;
// }
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
    cout << isSorted(arr, n);
    return 0;
}