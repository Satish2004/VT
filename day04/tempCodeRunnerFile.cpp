#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number=" << endl;
    cin >> num;
    while (num != 1 && num > 9)
    {
        int sum = 0;
        while (num > 0)
        {

            int lastDigit = num % 10;
            sum = sum + (lastDigit * lastDigit);
            num = num / 10;
        }
        num = sum;
    }
    if (num == 1)
    {
        cout <<"number is= "<< num << " is happy number" << endl;
    }
    else
    {
        cout << "number is= "<<num << " is unhappy number" << endl;
    }
    return 0;
}