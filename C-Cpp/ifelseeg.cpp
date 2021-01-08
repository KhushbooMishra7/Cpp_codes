#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter savings:"<<endl;
    cin>>s;
if(s>5000)
{
    cout<<"Neha\n";
    if(s>10000)
    {
        cout<<"Party";
    }
    else
    {
        cout<<"shopping";
    }
    
}
else if(s>2000)
{
    cout<<"Rashmi\n";
}
else
{
    cout<<"frineds";
}
   
    
    return 0;
}