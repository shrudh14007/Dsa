#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
    int n =arr.size();

    for(int i=0;i<n;i++)
    {
        int num =arr[i];
        int count =0;
    
    for(int j=0;j<n;j++)
    {
        if(arr[j]==num)
        count++;
    }
    if(count == 1)
    return num;

    }
    return -1;

}

int main()
{
    vector <int> arr={4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout<<"the single element is"<<ans<<endl;
    return 0;
}

