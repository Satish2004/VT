#include <iostream>
using namespace std;
int main()
{
    int num;
    int digitSum = 0; // rem
    cout << "enter your Number";
    cin >> num;

    while (num != 0 || digitSum > 9)
    {
        if (num == 0)
        {
            num = digitSum;
            digitSum = 0;
        }
        int  lastDigit = num % 10;
        digitSum = digitSum + lastDigit;
        num = num / 10;
    }
    cout << digitSum;
    return 0;
}