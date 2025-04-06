#include<bits/stdc++.h>
using namespace std;

bool linearsearch(vector<int>&a,int num)
{
    int n = a.size();
    for(int i =0;i<n;i++)
    {
        if(a[i]==num)
        return true;
    }

    return false;
}
int longestsuccessiveelements(vector<int>&a)
{
    int n =a.size();
    int longest =1;
    for(int i=0;i<n;i++)
    {
        int x =a[i];
        int cnt =1;
        while(linearsearch(a,x+1)==true)
        {
            x+=1;
            cnt+=1;
        }
        longest = max(longest,cnt);
    }
    return longest;
}

int main()
{
    vector<int>a ={100, 200, 1, 2, 3, 4};
    int ans = longestsuccessiveelements(a);
    cout<<"the longest successive elements are: "<<ans<<"\n";
    return 0;
}