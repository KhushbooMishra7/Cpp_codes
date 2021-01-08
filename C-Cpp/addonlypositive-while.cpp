//This code keeps taking value from user and keeps adding them,until the no. is positive.If no is negative the sum will be displayed.
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter your no:  ";
cin>>n;
int sum=0;
while(n>=0)
{
    sum+=n;
    cout<<"Enter your no:  ";
    cin>>n;
}
cout<<"The end sum is: "<<sum<<endl;
return 0;
}