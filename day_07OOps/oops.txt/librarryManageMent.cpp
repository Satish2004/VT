#include <iostream>
#include <vector>
using namespace std;

class Library
{
    string name;
    string author;
    int s_no;
public:
    Library(string name, string author, int s_no)
    {
        this->name = name;
        this->author = author;
        this->s_no = s_no;
    }

    void Input()
    {

        cout << "enter the book name =";
        cin >> name;
        cout << "enter the author name=" << endl;
        cin >> author;
        cout << "enter book serial number=" << endl;
        cin >> s_no;
    }

void checkAvailability(){
if(name=="satish"){
    cout<<"book is Available";
}
else{
    cout<<"book is not available"<<endl;
}

}
};

int main()
{
Library lib = Library("satish", "chandra", 67);
lib.Input();
lib.checkAvailability();

    return 0;
}
// add
// borrow
//  return