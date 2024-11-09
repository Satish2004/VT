

// 1 WAY TO FIND THIS SITUATION

#include <iostream>
using namespace std;
int main()
{
    int height;
    int age;
    string want_photo;
    int sum = 0;
    int amount =0;
    cout << "enter height??" << endl;
    cin >> height;
    if (height > 120)
    {
        cout << "can ride" << endl;
        cout << "what is your age";
        cin >> age;
        if (age > 18)
        {
            cout << "you have to pay $12";
            amount = sum +12;
        }
        else if (age >= 12 && age <= 18)
        {
            cout << "you have to pay $7";
            amount = sum+ 7;

        }

        else
        {
            cout << "you have to pay $5" << endl;
            cout << "want photo";
            cin >> want_photo;

            if (want_photo == "yes")
            {
                cout << "you have to pay +$3";
                amount =sum + 3;
            }
            else
            {
                cout << "you have to pay total amount is= " << amount;
            }
        }
    }

    else
    {
        cout << "cant ride" << endl;
    }
    return 0;
}

// 2 WAY TO FIND THIS SITUATION

// #include <iostream>
// using namespace std;
// int main(){
// int height;
// cout<<"height??";
// cin>>height;  also use in conditional rendering--->
// height>120 ? "can ride" : "can not ride";
// return 0;
// }