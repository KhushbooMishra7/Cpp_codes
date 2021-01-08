#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter in the format no operator no. E.g. 2*5\n";
    cin>>a>>op>>b;
    switch(op)
    {
        case '+':
        {
            cout<<a<<op<<b<<"="<<a+b;
            break;
        }
        case '-':
        {
            cout<<a<<op<<b<<"="<<a-b;
            break;
        }
        case '*':
        {
            cout<<a<<op<<b<<"="<<a*b;
            break;
        }
        case '/':
        {
            cout<<a<<op<<b<<"="<<a/b;
            break;
        }
        default:
        {
            cout<<"Enter only add, sub, multiply and div operators!";
        }
    }
        return 0;
}