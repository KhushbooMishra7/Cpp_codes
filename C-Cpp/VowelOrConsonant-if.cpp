#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter an alphabet:\n";
cin>>ch;
if(ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
{
    cout<<"You entered a vowel\n";
}
else
{
    cout<<"You entered a consonant\n";
}
return 0;
}