#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int sum =0;
    for(int i=0;i<=n;i++)
    {
        sum +=i;
    }
    cout<<"the sum of the first "<<n<<"numbers"<<sum<<endl;
}

int main()
{
    solve(5);
    solve(6);
    return 0;
}