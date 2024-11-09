#include <iostream>
using namespace std;
int main()
{
    int n;
    int result= 0;
    cout << "enter the number";
    cin >> n;
    while (n != 0)
    {
        int lastDigit = n % 10;
        
        result = result+ (lastDigit * lastDigit);
        n = n / 10;
    }
    cout << "sum of the digit of square is =" << result;
    return 0;
}