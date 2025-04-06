#include<bits/stdc++.h>
using namespace std;

int GetLongestArray(vector<int>&a,int k)
{
    int n= a.size();
    int len=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            long long s=0;
            for(int k=i;k<=j;k++)
            {
                s+=a[k];
            }
            if(s==k)
            len= max(len,j-i+1);
        }
        
    }
    return len;

}

int main()
{
vector<int>a={-1,1,1};
long long k =1;
int len = GetLongestArray(a,k);
cout<<"the longest array is: "<<len<<"\n";
return 0;
}
