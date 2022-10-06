// program to indentify character number or special symbol
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character:";
    cin>> ch;

    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
    {
        cout<<"it is alphabet"<<endl;
    }
    else 
    {
        if(ch>=48&& ch<=57)
        {
            cout<<"it is number"<<endl;
        }
        else
        {
            cout<<"it is special character"<<endl;
        }
    }
    return 0;
}