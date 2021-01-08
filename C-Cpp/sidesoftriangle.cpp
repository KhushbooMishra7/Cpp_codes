#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides of your triangle\n";
    cin>>a>>b>>c;
if(a==b)
{
    if(b==c)
    {
        cout<<"Triangle is equilateral";
    }
    else
    {
       cout<<"Triangle is isoceles";   
    }
    
}
else if(b==c)
{
   cout<<"Triangle is isoceles";  
}
else
{
    cout<<"Triangle is scalene";   
}
 
    return 0;
}