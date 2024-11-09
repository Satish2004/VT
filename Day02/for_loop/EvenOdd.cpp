#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter 5 digit number";
    cin >> n;
    int lastDigit;
    int count =0;

    for (int i = 0; i <= n; i++)
    {

        lastDigit = n % 10;
        n = n / 10;
        if (lastDigit % 2 == 0)
        {
            // cout << lastDigit << "=even" << endl;
            i++;
            count++;
        }
    }
    
    cout << "Total number of even is ="<<count;

    return 0;
}