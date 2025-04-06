#include<bits/stdc++.h>
using namespace std;

int largest_element(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {2,5,1,3,0};
    int n = 5;
    int max = largest_element(arr,n);
    cout<<"the largest of the array is"<<max<<endl;
    return 0;
}