#include <bits/stdc++.h>
using namespace std;

// effective

int maxConsecutiveOnes(bool arr[], int n)
{
    int res = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(curr, res);
        }
    }
    return res;
}

// naive

// int maxConsecutiveOnes(bool arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int curr = 0;
//         for (int j = i; i < n; j++)
//         {
//             if (arr[j] == 1)
//                 curr++;
//             else
//                 break;
//         }
//         res = max(res, curr);
//     }
//     return res;
// }
int main()
{
    int n;
    cout << "enter the size of array :";
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number to input in array : ";
        cin >> arr[i];
    }
    cout << maxConsecutiveOnes(arr, n);

    return 0;
}