#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>&arr , int target )
{
    int n = arr.size();
    int high =n-1;
    int low=0;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        return mid;
        else if (target>arr[mid])
        low =mid+1;
        else  high = mid-1;
    }
    return -1;

}
int main()
{
    vector<int>a={3, 4, 6, 7, 9, 12, 16, 17};
    int target =6;
    int result = binarysearch(a,target);
    if (result == -1) cout<<"the element is not present";
    else cout<<"the target is at index  : "<<result<<endl;

    return 0;
}