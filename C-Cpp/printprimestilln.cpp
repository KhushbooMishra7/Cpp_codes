//This pgm is used to display prime nos between a range given by user.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter limits to print prime no.s from.\n";
    cin>>a>>b;
for(int n=a;n<=b;n++)//This loop is used to check if entered no is greater 2..
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)//we check if given no is divisible by 2. If it is ,then its a non prime no. and we break from loop.its non prime because n is> than 2 and divisible be 2, which means n is divisible by 2 no.s hence non-prime.
        {
            break;
        }
    }
        if(n==i)//The loop is over we will check if i is changed or not if it is and its equal to n, it means its prime.
        {
           cout<<n<<endl;
        }
    }
// if not understood go to this link https://youtu.be/Stf7KBiA1vs
return 0;
}

