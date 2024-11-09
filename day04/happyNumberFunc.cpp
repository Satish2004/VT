#include <iostream>
using namespace std;
// we have the function
bool isHappyNum(int num)
{     
    while (num != 0 && num > 9)
    {

       int sum = 0;
        while (num > 0)
        {
            int lastDigit = num % 10;
            sum = sum + (lastDigit * lastDigit);
            num = num/10;
        }
        num = sum;
       
    }


     if (num == 1)
        {
            cout << "happy number" << endl;
            return true;
        }

        else if (num != 1)
        {
            cout << "unhappy number" << endl;
            return false;
        }
}

int main()
{
    int num;
    cout << "Enter the number=" << endl;
    cin >> num;
    isHappyNum(num);
    // cout<<num;
    return 0;
}