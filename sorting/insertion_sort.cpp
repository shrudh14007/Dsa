#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    { 
       int j= i;
    
    while(j>0 && arr[j-1]>arr[j])
    {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
    cout<<"after the insertion sort:\n";
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   

    }
    cout<<" \n";
}

int main()
{
    int arr[]= {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<" before insertion sort: " <<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    insertion(arr,n);
    return 0;
}

