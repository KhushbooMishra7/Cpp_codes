//this program prints the value given by user till the user provides positive value. As soon as user will give negative or 0, the program will stop printing value given by user.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    while(n>0)
    {
     cout<<n<<endl;
     cin>>n;
    }
    return 0;
}