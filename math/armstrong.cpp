#include <bits/stdc++.h>
using namespace std;

bool isarmstrong(int num)
{
    

    int sum = 0;

    int n = num;

    int k = log10(num)+1;

    while(n>0)
    {
        int ld = n % 10;
        sum += pow(ld,k);
        n = n/10;
    }

    return sum == num ;
}

int main()
{
    int number =  153;
    if(isarmstrong(number))
    {
        cout<<number<<"this is an armstrong number "<<endl;
    }
    else
    {
        cout<<number<<"this is not an armstrong number "<<endl;
    }

    return 0;
}


