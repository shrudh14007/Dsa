#include<cmath>
#include<iostream>
#include<algorithm>

using namespace std;

int countdigits(int n)
{
    int cnt =(int)(log10(n)+1);

    return cnt;
}

int main()
{
    int N = 38923;
    cout<<"N: "<<N<<endl;
    int digits = countdigits(N);
    cout<<"number of digits in the number is : "<<digits<<endl;
    return 0;

}

