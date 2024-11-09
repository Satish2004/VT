#include <iostream>
using namespace std;
int main(){
int a;
int b;
char cal;
int ans=0;
int divide;

cout<<"enter the two number a and b";
cin>>a>>b;
cout<<"what do you want ";
cin>>cal;

switch (cal)
{
case 'A':
    ans= a+b;
    cout<<ans;
    break;

    case 'S':
    ans= a-b;
    cout<<ans;
    break;

    case 'M':
    ans= a*b;
    cout<<ans;
    break;

    case 'D':
    ans= a/b;
    cout<<ans;
    break;

default:
cout<<"you not enter any value";
    break;
}

return 0;
}