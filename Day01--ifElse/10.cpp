#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the number1 and number2";
    cin>>a>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<b;
    

    return 0;
}