#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 nos\n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<"is greatest";
        }
        else
        {
            cout<<c<<" is greatest";
        }
    }
    
    else if(b>c)
        {
            cout<<b<<" is greatest";
        }
    else
    {
        cout<<"All are equal";
    }
    
    
        

    return 0;
}