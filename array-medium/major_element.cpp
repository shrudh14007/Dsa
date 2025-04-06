#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>vt)
{
   int n= vt.size();
   map<int,int>mpp;

   for(int i=0;i<n;i++)
   {
    mpp[vt[i]]++;
   }

   for(auto it:mpp)
   {
    if(it.second>(n/2))
    {
        return it.first;
    }
   }

   return -1;

}

int main()
{
    vector<int>arr={2, 2, 1, 1, 1, 2, 2};
    int ans =majorityElement(arr);
    cout<<"the majority element is: "<<ans<<endl;
    return 0;
}