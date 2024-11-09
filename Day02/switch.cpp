#include <iostream>
using namespace std;
int main()
{

    char ans;
    cout << "photo??";
    cin >> ans;

    switch (ans)
    {
    case 'Y':
        cout << "YES";
        break;

    case 'N':
        cout << "NO";
        break;
    }
}