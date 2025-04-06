#include<bits/stdc++.h>
using namespace std;

int findmax(vector<int>&v)
{
    int maxi = INT_MIN;
    int n = v.size();

    for(int i =0;i<n;i++)
    {
        maxi = max(maxi,v[i]);

    }
    return maxi;
}

int calculatetotalhours(vector<int>&v,int hourly)
{
    int totalH =0;
    int n= v.size();

    for(int i=0;i<n;i++)
    {
        totalH += ceil((double)(v[i])/ (double)(hourly));
    }
    return totalH;
}

int minimumhourlyrate(vector<int>v,int h)
{
    int low =1;
    int high = findmax(v);

    while(low<=high)
    {
        int mid = (low+high)/2;
        int totalH = calculatetotalhours(v,mid);
        if(totalH<= h)
        {
            high = mid - 1;

        }
        else{
            low =mid + 1;

        }

        

    }
    return low;
}

int main()
{
    vector<int>v= {7, 15, 6, 3};
    int h = 8;
    int ans = minimumhourlyrate(v,h);
    cout<<"kokk should eat atleast: "<<ans<<" bananas";
    return 0;
}
