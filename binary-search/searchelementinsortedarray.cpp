#include<bits/stdc++.h>
using namespace std;

int sortedarray1(vector<int>&arr, int n ,int k)
{
    int low =0;
    int high =  n-1;
    
    while(low<= high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==k) return mid;

        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=k && k<=arr[mid])
            {
                high = mid -1;

            }
            else
            {
                low = mid +1;
            }
        }
        else
        {
            if(arr[mid]<=k && k<=arr[high])
            {
                low =mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        
    }
    return -1;
}

int main()
{
    vector<int>arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n =9,k=1;
    int ans = sortedarray1(arr,n,k);
    if(ans ==-1)
    cout<<"target is not present.\n";
    else
    cout<<"the target is at index: "<<ans<<endl;
    
    return 0;
}