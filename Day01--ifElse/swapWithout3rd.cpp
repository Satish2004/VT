#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "enter the num1";
    cin >> num1;
    int num2;
    cout << "enter the num2";
    cin >> num2;
    num1 = num1 * num2; // num1 = num1^num2  // using xor
    num2 = num1 / num2; // num2 = num1^ num2
    num1 = num1 / num2; // num1 = num1^ num2;

    // 2 way to find the swap without any 3rd variable===>
    //  num1 = num1+ num2;
    // num2 = num1- num2;
    // num3 = num1+ num2;

   

    // we can solve using ^ in place of (/ and *) and + and - in place of * and /

    cout << num1 << num2;
    return 0;
}