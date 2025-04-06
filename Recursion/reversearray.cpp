#include<iostream>
#include<algorithm>

using namespace std;

void printarray(int arr[],int n)
{
    cout<<"the reversed array is :- "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
void reversedarray(int arr[],int n)
{
    reverse(arr,arr+n);
}

int main()
{
    int n =5;
    int arr[]={5,4,3,2,1};
    reversedarray(arr,n);
    printarray(arr,n);

    return 0;

}
