#include<iostream>
using namespace std;

bool palindrome(int n)
{
    int revnum = 0;
    int dup =n;

    while (n>0)
    {
        int ld = n % 10;
        revnum = (revnum *10 )+ld;
        n =n/10;
        
    }

    if(dup == revnum)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
    {
        int number=4554;
        if(palindrome(number))
        {
            cout<<number<<"this is a palindrome "<<endl;
        }
        else
        {   
            cout<<number<<"this is not a palindrome"<<endl;
        }

        return 0;
    }




