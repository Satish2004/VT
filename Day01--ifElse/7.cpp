#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the first number";
    cin >> a;
    int b;
    cout << "enter the second number";
    cin >> b;
    int sum;
    int mul;
    int div;
    bool isSum = true;
    bool isMul = true;
    bool isDiv = true;

    cout << "what you like sum mul div= ";
    cin >> isSum >> isDiv >> isMul;
    if (isSum ==true)
    {
        sum = a + b;
        cout << "sum is" << sum;
    }
    else if (isMul == true)
    {
        mul = a * b;
        cout << "multiply is" << mul;
    }

    else
    {
        div = a / b;

        cout << "div is" << div;
    }
}