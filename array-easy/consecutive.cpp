#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    int consecutive(vector<int>&nums)
    {
        int maxi=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                count=0;
            }
            maxi=max(maxi,count);
        }

        return maxi;
    }
};

int main()
{
    vector<int> nums ={1, 1, 0, 1, 1, 1};
    solution obj;
    int ans = obj.consecutive(nums);
    cout<<"the consecutive number of ones are: "<<ans<<endl;
    return 0;
}