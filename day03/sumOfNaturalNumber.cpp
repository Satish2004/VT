#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "enter the number";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}