

// 1 WAY TO FIND THIS SITUATION

#include <iostream>
using namespace std;
int main()
{
    int height;
    int age;
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
        }
        else if (age >= 12 && age <= 18)
        {
            cout << "you have to pay $7";
        }

        // else if--->
        else
        {
            cout << "yiu have to pay $5";
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
// height>120 ? cout<<"can ride" : cout<<"can not ride";
// return 0;
// }