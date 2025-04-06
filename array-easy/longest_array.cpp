#include<bits/stdc++.h>
using namespace std;

int Longest_array(vector<int>&a,long long k)
{
    int n = a.size();

    int len =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            long long s = 0;
            for(int k=i;k<=j;k++)
            {
                s +=a[k];
            }
            if(s==k)
            len=max(len,j-i+1);

        }
    }
    return len;
}

int main()
{
    vector<int>a={2, 3, 5, 1, 9};
    long long k= 10;
    int len = Longest_array(a,k);
    cout<<"the longest array is: "<<len<<endl;
    return 0;

}