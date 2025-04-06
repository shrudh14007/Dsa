#include<bits/stdc++.h>
using namespace std;

vector<int> arrangebysign(vector<int>A,int n)
{   
    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<n;i++)
    {
        if(A[i]>0)
        pos.push_back(A[i]);

        else
        neg.push_back(A[i]);
    }

    for(int i=0;i<n/2;i++)
    {
        A[2*i]=pos[i];
        A[2*i+1]=neg[i];
    }

    return A;
}

int main()
{


int n=4;
vector<int> A {1,2,-4,-5};
vector<int>ans= arrangebysign(A,n);
for(int  i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}

return 0;
}
