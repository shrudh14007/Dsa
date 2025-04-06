#include<bits/stdc++.h>
using namespace std;

int floorsqrt(int n)
{
    int low =1;
    int high = n;
    while(low<=high)
    {
        long long mid = (low+high)/2;
        long long val = mid*mid;
        if(val<=(long long)(n))
        {
            low = mid +1;
        }
        else{
            high = mid - 1;
        }

    }
    return high;
}
int main()
{
    int n = 28;
    int ans = floorsqrt(n);
    cout<<"the floor of the square root of "<<n<<"is"<<ans<<"\n";
    return 0;
}