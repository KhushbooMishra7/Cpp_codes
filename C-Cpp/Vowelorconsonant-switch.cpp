#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an alphabet to check if its a vowel or consonant.\n";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'A':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'e':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'E':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'i':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'I':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'o':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'O':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'U':
        {
            cout<<"This is a vowel";
            break;
        }
        case 'u':
        {
            cout<<"This is a vowel";
            break;
        }

        default:
        {
            cout<<"This is a consonant";
        }
    }
    return 0;
}
