#include<iostream>
using namespace std;
int main()
{
    //user clicks button i.e enters values among a,b,c,d,e and corresponding result is displayed.
    char button;
    cin>>button;
    switch(button)
    {
        case 'a':
        {
            cout<<"Apple";
            break;
        }
        case 'b':
        {
            cout<<"Banana";
            break;
        }
        case 'c':
        {
            cout<<"Caramel";
            break;
        }
        case 'd':
        {
            cout<<"dragonfruit";
            break;
        }
        case 'e':
        {
            cout<<"english tea";
            break;
        }
        default:
        {
            cout<<"TEA";
        }
    }
    return 0;
}