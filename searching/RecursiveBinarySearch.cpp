#include <bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int n, int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return bSearch(arr, n, low, mid - 1, x);
    else 
        return bSearch(arr,n,mid+1,high,x);
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
    int low=arr[0];
    int high=arr[n-1];
    int x;
    cout<<"Enter the elements to find their index";
    cin>>x;
    cout<<bSearch(arr,n,low,high,x);

    return 0;
}