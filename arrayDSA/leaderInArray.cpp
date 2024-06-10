#include <bits/stdc++.h>
using namespace std;
void leaderInArray(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    cout << arr[res];
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
    leaderInArray(arr,n);
    return 0;
}