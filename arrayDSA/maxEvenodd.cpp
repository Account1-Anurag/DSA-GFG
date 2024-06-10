#include <bits/stdc++.h>
using namespace std;

// TIME CMPLEXITY BIG0 of (Nsqr)

// int maxEvenOdd(int arr[], int n)
// {
//     int res = 1;
//     for (int i = 0; i < n; i++)
//     {
//         int curr = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
//             {
//                 curr++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         res = max(curr, res);
//     }
//     return res;
// }

//TIME COMPLEXITY BIG0 OF N

int maxEvenOdd(int arr[],int n){
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
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
    cout << maxEvenOdd(arr, n);

    return 0;
}