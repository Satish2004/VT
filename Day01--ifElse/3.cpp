#include <iostream>
using namespace std;
int main()
{
    string girlRespond;
    string cardRespond;
    bool hasGirl = false;
    bool hasVIPm = false;
    cout << "do you have girl friend(yes/no)=" << endl;
    cin >> girlRespond;

    if (girlRespond == "yes")
    {
        hasGirl = true;
    }

    // cout<<"do you have VIP card ??(yes/no) = ";
    // cin>>cardRespond;
    if (hasGirl == true)
    {
        cout << "Its free enjoy party" << endl;
    }

    else if (hasGirl == false)
    {
        cout << "you have not girlfriend and so its not free " << endl;
        cout << "do you have VIP card ??(yes/no) = " << endl;
        cin >> cardRespond;
    }

    if (cardRespond == "yes")
    {
        cout << "Free you have VIP card baby !!" << endl;
    }
    else
    {
        cout << "you have not vip card so no entry" << endl;
    }
    return 0;
}