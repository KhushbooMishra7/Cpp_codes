#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your no.\n";
    cin>>n;
    int sum=0;
    for(int counter=0;counter<=n;counter++)
    {
    sum=sum+counter;
    }
    cout<<sum;
    return 0;
}