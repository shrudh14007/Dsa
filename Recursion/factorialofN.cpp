#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans = ans*i;
    }
    return ans;
}

int main()
{   
    int n =5;
    int result = fact(n);
    cout<<"the factorial of the first "<< n <<" number are "<<result<<endl;

}