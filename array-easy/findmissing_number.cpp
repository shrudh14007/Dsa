#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int>&a,int N)
{
    for(int i=1;i<=N;i++)
    {
        int flag =0;
    
    for(int j=0;j<N-1;j++)
    {
        if(a[j]==i)
        {
            flag=1;
            break;
        }
        if(flag==0)
        return i;
    }   
    }
    return -1;

}

int main()
{
    int N=5;
    vector<int> a = {1,2,4,5};
    int ans = missing_number(a,N);
    cout<<"the missing number is: "<<ans<<endl;
    return 0;
}