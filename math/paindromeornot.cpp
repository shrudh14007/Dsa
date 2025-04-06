#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s)
{
    int left = 0, right= s.length()-1;
    while(left<right)
    {
        if(!isalnum(s[left]))
        left ++;
        else if(!isalnum(s[right]))
        right--;
        else if(tolower(s[left])!=tolower(s[right]))
        return false;
        else
        {
            left++;
            right--;
        }

    }
    return true;
    
}

int main()
{
    string str = "ABCDCBA";
    bool ans = ispalindrome(str);
    if (ans==true)
    {
        cout<<"this is a palindrome";
    }
    else
    {
        cout<<"this is not a palindrome";
    }
    return 0;
}