#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; i < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

// Selection Sort

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            swap(arr[min_index], arr[i]);
        }
    }
}

// Insertion Sort

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// All above timecomplexity is O(n^2)

// Merge Sort

void Merge(int arr[],int l,int m,int r){
     int n1=m-l+1; 
     int n2=r-m;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
        }
        else{
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=right[j];
        k++;
        j++;
    }
}
void MergeSort(int arr[], int l, int r){
    if(r>l){
        int m=l+((r-l)/2);
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}

// Quick Sort   



int main()
{

    return 0;
}