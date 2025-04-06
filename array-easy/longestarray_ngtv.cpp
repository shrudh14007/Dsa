#include<bits/stdc++.h>
using namespace std;

int longest_array(vector<int>&a , long long k)
{
    int n = a.size();
    int len=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int s =0;
            for(int k=i;k<=j;k++)
            {
                s+= a[k];
            }
            if(s==k)
            len=max(len,j-i+1);
        }
    }
    return len;
     
}
int main()
{
    vector<int> a={-1,1,1};
    int k=1;
    int len = longest_array(a,k);
    cout<<"the longest array is : "<<len<<endl;
    return 0;
}