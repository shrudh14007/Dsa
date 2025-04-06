#include<bits/stdc++.h>
using namespace std;

int firstocc(vector<int>&arr,int n,int k)
{
    int low = 0;
    int high =n-1;
    int first = -1;

    while(low<=high)
    {
        int mid = (high + low)/2;
        if(arr[mid]==k)
        {
            first = mid;
            high = mid-1;
        }
        
        else if(arr[mid]<k)
        {
           low = mid+1;

        }
        else
        {
            high = mid -1;
        }
    }
    return first;
}

int lastocc(vector<int>&arr,int n,int k)
{
    int low = 0;
    int high =n-1;
    int last = -1;

    while(low<=high)
    {
        int mid = (high + low)/2;
        if(arr[mid]==k)
        {
            last = mid;
            low = mid+1;
        }
        else if(arr[mid]<k)
        {
           low = mid+1;

        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

pair<int,int> firstandlastposition(vector<int>&arr,int n,int k)
{
    int first =firstocc(arr,n,k);
    
    if(first==-1) return{-1,-1};
    int last = lastocc(arr,n,k);
    return {first,last};

}

int count(vector<int>&arr,int n,int x)
{
    pair<int,int> ans = firstandlastposition(arr,n,x);
    if(ans.first == -1) return 0;
    return (ans.second - ans.first +1);
}

int main()
{
    vector<int>arr={2, 4, 6, 8, 8, 8, 11, 13};
    int n =8,x=8;
    int ans = count(arr,n,x);
    cout<<"the first occurunces are : "<<ans<<'\n';
    return 0;
}