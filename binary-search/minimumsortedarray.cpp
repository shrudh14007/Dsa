#include<bits/stdc++.h>
using namespace std;

int sortedarray(vector<int>&arr)
{
    int low =0;
    int high =arr.size();
    int ans = INT_MAX;

    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[low]<=arr[mid])
        {
            ans = min(ans,arr[low]);
            low = mid +1;

        }
        else
        {
            ans= min(ans,arr[mid]);
            high = mid-1;
        }

    }
    return ans;
}

int main()
{
    vector<int>arr={4, 5, 6, 7, 0, 1, 2, 3};
    int ans = sortedarray(arr);
    cout<<"the minimum element is : "<<ans;
    return 0;
}