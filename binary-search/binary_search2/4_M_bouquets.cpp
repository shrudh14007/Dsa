#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>&arr, int day , int m, int k)
{
    int n = arr.size();
    int cnt =0;
    int boq=0;

    for(int i =0; i<n;i++)
    {
        if(arr[i]<=day)
        {
            cnt++;
        }
        else
        {
            boq += (cnt/k);
            cnt =0;
        }
    }
    boq += (cnt/k);
    return boq>=m;
}

int rosegarden(vector<int>&arr, int k ,int m)
{
    long long val = m * 1ll * k *1ll;
    int n = arr.size();
    if(val>n) return -1;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i =0;i<n;i++)
    {
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]);
    }

    int low = mini;
    int high = maxi;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(possible(arr,mid,m,k))
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int main()
{
    vector<int>arr={7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m =2;
    int ans = rosegarden(arr,k,m);
    if(ans==-1)
    cout<<"we cannot make bouquets";
    else
    cout<<"we can make bouquets on day "<<ans;
    return 0;

}

