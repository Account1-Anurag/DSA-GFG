#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
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
    cout<<"Array before reversed :"<<endl;
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr,n);
    cout<<"Reversed Array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i]<<" ";
    }
    
    return 0;
}