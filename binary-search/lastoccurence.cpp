#include<bits/stdc++.h>
using namespace std;

int lastoccurence(int n, int key,vector<int>v)
{
    int low =0;
    int high =n-1;
    int res=-1;

    while(low<=high)
    {
        int mid =low+(high-low)/2;
        if(v[mid]==key)
        {
            res =mid;
            low= mid+1;
        }
        else if(key<v[mid])
        {
            high = mid-1;

        }

        else
        {
            low=mid+1;
        }
    }

    return res;
}

int main()
{
    int key=13;
    int n=7;
    vector<int>v ={3,4,13,13,13,20,40};

    cout<<lastoccurence(n,key,v)<<'\n';
    return 0;

}