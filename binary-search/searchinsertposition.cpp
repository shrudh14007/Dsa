#include<bits/stdc++.h>
using namespace std;

int searchinsertposition(vector<int>&arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans =n;

    while (low<=high)
    {
        int mid = (high + low)/2;
        if(arr[mid]>=x)
        {
            ans = mid;
            high = mid -1;
        }

        else 
        {
            low = mid + 1;
        }

    }
    return ans;
}

int main()
{
    vector<int> arr={1, 2, 4, 7};
    int x=4;
    int ind = searchinsertposition(arr,x);
    cout<<"the position of the index to be placed is at: "<<ind<<endl;
    return 0;
}
