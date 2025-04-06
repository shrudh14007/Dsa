#include<iostream>
#include<algorithm>

using namespace std;

int findgcd(int a , int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }

        else
        {
            b= b%a;
        }
    if (a==0)
    {
        return b;

    }
    else
    {
        return a;
    }

    }
}

int main()
{
    int n1=20, n2=15;
    int gcd =findgcd(n1,n2);
    cout<<"the gcd of the number "<<n1<<"and"<<n2<<"is"<<gcd<<endl; 
    return 0;
}