#include<iostream>

using namespace std;

int main()
{
    char ch;
    do
    {
        int a,b,op,ans;
        cout<<"\nEnter first no:";
        cin>>a;
        cout<<"\nEnter operator: \n 1.+ \n 2.- \n 3.* \n 4./ \n5.% : ";
        cin>>op;
        cout<<"\nEnter second no:";
        cin>>b;
        switch (op)
        {
            case 1:
                ans =a+b; 
                cout<<ans;
                break;
            case 2:
                ans = a-b;
                cout<<ans;
                break;
            case 3:
                ans = a*b;
                cout<<ans;
                break;
            case 4:
                ans = a/b;
                cout<<ans;
                break;
            case 5:
                ans = a%b;
                cout<<ans;
                break;
            default:
                break;
        }
        cout<<"\nYou want to do again than enter Y\n";
        cin>>ch;
    }while(ch == 'Y' || ch== 'y');
    return 0;
}
