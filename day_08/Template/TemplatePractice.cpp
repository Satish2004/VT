#include <iostream>
using namespace std;
template < typename T>
void maximumNumber(T &a, T &b){
    a>b?cout<<"maximum number is ="<<a:cout<<"maximum number is ="<<b;
}

int main(){
// maximumNumber(int 10, int 20);
int x;
cout<<"enter the first number =";
cin>>x;

int y;
cout<<"enter the second number =";
cin>>y;
maximumNumber(x, y);
return 0;
}