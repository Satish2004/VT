#include <iostream>
using namespace std;
//  return and with argument;
int isDoctorAvail(string doctorName)
{
    if (doctorName == "Sharma")
    {
        return true;
    }
    else
    {
        return 0;
    }
}
// without return but no argument-->
void isCheck()
{
    if (true)
    {
        cout << "Thankyou! Now You have to go for home !!" << endl;
    }
    else
    {
        cout << "its not complete your treatment";
    }
}

// without return and with argument
void availBlood(string hasBlood)
{
    if (hasBlood == "O+" || hasBlood == "B-")
    {
        cout << "Yes its available" << endl;
    }
    else
    {
        cout << "sorry to say that currently not available !!" << endl;
    }
}

// with return and without argument;

int romNum()
{
    int room;
    cout << "My patient room no is=" << endl;
    cin >> room;
    if (room <=14)
    {
        cout << "Room is available now" << endl;
    }
    else
    {
        cout << "There is no rooms" << endl;
    }
}

int main()
{
    string name;
    int age;
    cout << "enter your name" << endl;
    cin >> name;
    cout << "enter your age" << endl;
    cin >> age;
    string doctorName;
    cout << "tell me whos doctor to treat to you!!";
    cin >> doctorName;
    isDoctorAvail(doctorName);
    string hasBlood;
    cout << "enter your blood group(0+ or B-)" << endl;
    cin >> hasBlood;
    availBlood(hasBlood);
    romNum();
    bool alreadyCheck;
    cout << "isCheck or not(y/n)" << endl;
    cin >> alreadyCheck;
    isCheck();

    return 0;
}