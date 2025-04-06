#include<bits/stdc++.h>
using namespace std;

int stockprice(vector<int>&arr)
{
    int n = arr.size();
    int maxpro =0;
    int minprice = INT_MAX;

    for(int i =0;i<arr.size();i++)
    {
        minprice = min(minprice,arr[i]);
        maxpro=max(maxpro,arr[i]-minprice);
    }
    return maxpro;
}

int main()
{
    vector<int> arr={7,1,5,3,6,4};
    int maxpro = stockprice(arr);
    cout<<"max profit is: "<<maxpro<<endl;
}