#include<bits/stdc++.h>
using namespace std;

void pattern2(int N)
{
    for (int i =0;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<2*N-(2*i+1);j++)
        {
            cout<<"*";
        }

        for(int j= 0;j<i;j++)
        {
            cout<<" ";
        }

        cout<<endl;

    }
}

int main()
{
    int N=6;
    pattern2(N);
    return 0;
}