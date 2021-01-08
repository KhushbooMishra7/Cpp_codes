#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no.  to check prime or not prime.";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int div=2;
        if(n>div)
        {
            if(n%div==0)
            {
                cout<<"non-prime";
            }
            else{
                 div++;
            }
        }
        else{
            cout<<"prime";
        }
    }
    return 0;
}

