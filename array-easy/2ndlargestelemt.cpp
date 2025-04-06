#include<bits/stdc++.h>
using namespace std;

int second_smallest(int arr[],int n)
{
    if(n<2)
    return -1;

    int small= INT_MAX;
    int second_small = INT_MAX;
    
    for(int i = 0; i<n;i++)
    {
        if(arr[i]<small)
        {
            second_small = small;
            small = arr[i];
        }
        else if(arr[i]<second_small && arr[i] != small)
        {
            second_small = arr[i];
        }

    }
    return second_small;
}

int second_Largest(int arr[],int n)
{
    if(n<2)
    return -1;
    int large=INT_MIN;
    int second_large = INT_MIN;
    

    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            second_large =large;
            large =arr[i];
        }
        else if(arr[i]>second_large && arr[i] != large)
        {
            second_large = arr[i];
        }   
    }
    return second_large;
}

int main()
{
    int arr[]={1,2,4,7,7,5};
    int n =sizeof(arr)/sizeof(arr[0]);
        int Ss= second_smallest(arr,n);
        int Sl= second_Largest(arr,n);
    cout<<"the second smallest integer is : "<<Ss<<endl;
    cout<<"the second largest interger is: "<<Sl<<endl;
    return 0;
}