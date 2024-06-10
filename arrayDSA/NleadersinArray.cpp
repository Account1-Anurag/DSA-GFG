#include <bits/stdc++.h>
using namespace std;

// EFFICIENT SOLUTION

// void leaders(int arr[],int n){
//     int curr_leader=arr[n-1];
//     cout<<curr_leader<<" ";
//     for(int i=n-2;i>=0;i--){
//         if(curr_leader<arr[i]){
//             curr_leader=arr[i];
//             cout<<(curr_leader)<<" ";
//         }
//     }
// }

// NAIVE SOLUTION

void leaders(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                if (flag = true)
                {
                    break;
                }
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
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
    leaders(arr, n);
    return 0;
}