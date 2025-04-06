#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> finddivisors(int n)
{
    vector<int>divisors;
    int sqrtn= sqrt(n);
    
    for(int i=1;i<= sqrtn;++i)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);

            if (i != n/i)
            {
                divisors.push_back(n/i);
            }

        }
        
    } 

     return divisors;
   
       
}

int main()
{
    int number = 12;
    vector<int> divisors = finddivisors(number);

    cout<<"divisors of "<<number <<"are: ";
    for(int divisor: divisors)
    {
        cout<<divisor<<" ";
    }
    cout<<endl;

    return 0;

}