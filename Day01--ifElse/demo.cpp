#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the num";
    cin >> num;

    while (num != 1 && num != 4)
    {
        int sum = 0;
        while (num > 0)
        {
            int lastDigit = num % 10;
            int sum = sum + (lastDigit * lastDigit);
            num = num/10;
        }
        num = sum;
    }
    if (num == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}