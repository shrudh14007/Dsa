#include<bits/stdc++.h>
using namespace std;

int rotated(vector<int>&arr)
{
    int low=0;
    int high = arr.size()-1;
    int ans = INT_MAX;
    int index =-1;

    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]<=arr[high])
        {
            if(arr[low]<ans)
            {
                index = low;
                ans = arr[low];

            }
            break;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<ans)
            {
                index = low;
                ans =arr[low];
            }
            low = mid+1;

        }
        else
        {
            if(arr[mid]<ans)
            {
                index =mid;
                ans = arr[mid];

            }
            high =mid -1;

        }
        
    }
    return index;

}

int main()
{
    vector<int>arr={4, 5, 6, 7, 0, 1, 2, 3};
    int ans = rotated(arr);
    cout<<"the array is rotated "<<ans<<"times";
    return 0;
}