#include <bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the size of array :" << endl;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the elements"<<endl;
        cin >> arr[i];
    }
    int x;
    cout<<"Enter the elements to find their index";
    cin>>x;
    cout<<bSearch(arr,n,x);
    return 0;
}