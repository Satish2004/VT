#include <iostream>
using namespace std;
int main()
{
    int num;
    int num2;
    int digitSum = 0;
    int digitSum2 = 0;
    int lastDigit2;
    int sum = 0;
    cout << "enter your Number";
    cin >> num;

    while (num != 0)
    {
        int lastDigit = num % 10;
        digitSum = digitSum + lastDigit;
        num = num / 10;
        num2 = digitSum;
    }
    // last of num2 value
    

    while (num2!= 0)
    {
        int lastDigit2 = num2 % 10;
        digitSum2 = digitSum2 + lastDigit2;
        num2 = num2 / 10;
    }

    cout << digitSum2;

    return 0;
}
