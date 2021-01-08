#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a positive integer for displaying its table\n";
    cin>>n;
    for(int c=1;c<=10;c++)//c is counter
    {
        cout<<n<<"*"<<c<<"="<<n*c<<endl;
    }
    return 0;
}