#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no.  to check prime or not prime.\n";
    cin>>n;
    int i; 
for(i=2;i<n;i++)//This loop is used to check if entered no is greater 2..
{
    if(n%i==0)//we check if given no is divisible by 2. If it is ,then its a non prime no. and we break from loop.its non prime because n is> than 2 and divisible be 2, which means n is divisible by 2 no.s hence non-prime.
    {
        cout<<"Non-prime";
        break;
    }
}
if(n==i)//The loop is over we will check if i is changed or not if it is and its equal to n, it means its prime.
{
cout<<"Prime";
}
else if(n==1||n==0)
{
    cout<<n<<" is non-prime and non-composite number";
}
return 0;
}

