#include <bits/stdc++.h>
using namespace std;

int maxprofit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit += (price[i] - price[i - 1]);
        }
    }
    return profit;
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
    cout << maxprofit(arr, n);
    return 0;
}