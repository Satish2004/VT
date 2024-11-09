
// online payment in hostel management-->


#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ===============================VARIABLES DEFINE SECTION==============================
// Generate the user-defined variable in struct

// For student management -->
struct Student
{
    string name;
    int rollNo;
    int contact;
};

// For room allocation management -->
struct Room
{
    bool isRoomAvail;
    double price = 50000;
    int roomNo;
};

vector<Student> students;
vector<Room> rooms;

// ========================PUSH THE DATA IN NEW VARIABLES USING VECTOR ======================================

// Add student -->
void addStudent(string name, int rollNo, int contact, int roomNo)
{
    // Adding each individual student information to students vector
    Student studentInfo = {name, rollNo, contact};
    students.push_back(studentInfo);
}

// Add room -->
void addRoom(bool isRoomAvail, double price, int roomNo)
{  cout<<"enter the RoomNo";
cin>>roomNo;
cout<<"Enter room hostel room price"<<endl;
cin>>price;

    Room roomInfo = {isRoomAvail, price, roomNo};
    rooms.push_back(roomInfo);
}

// Set room price -->
void setRoomPrice(int roomNo, double price)

{
    cout << "------------------HOSTEL MANAGEMENT-----------------------" << endl;
    double newPrice = 50000;
    for (auto &room : rooms)
    {

        if (room.roomNo == roomNo)
        {
            if (price == 50000)
            {

                room.price = price;
                cout << "You paid total amount of price is = " << price << " so can live here" << endl;
            }
            else if (price > 50000)
            {
                newPrice = price - newPrice;

                cout << "Your hostel fee is 50000rs you  paid " << price << "rs remaining fee " << newPrice << "rs including in your tution fee" << endl;
            }
            else
            {
                cout << "Hostel price must be  50,000  you have to pay this amount please pay the required amount...\n";
            }
            return;
        }
    }
    cout << "sorry room is not available.\n";
}

// Generate the bill for a student -->

void generateStudentBill(string studentName, int roomNo, double price)
{

    cout<<"enter the student name"<<endl;
    cin>>studentName;
    cout<<"enter the student RoomNo"<<endl;
    cin>>roomNo;
    cout<<"enter the price price"<<endl;
    for (const auto &student : students)
    {
        if (student.name == studentName)
        {            
            cout << "===============Student Bill============>\n";
            cout << "Student Name: " << student.name << endl;
            cout << "Student Roll No: " << student.rollNo << endl;
            cout << "Student Contact No: " << student.contact << endl;
            cout << "Student Room No: " << roomNo << endl;
            cout << "Student Hostel fee: " << price << endl;
        }
        else
        {
            cout << "sorry ! " << student.name << " is not found" << endl;
        }
    }
}
int main()
{


    string choice;
    cout << "Do you Want to generate the Bill (Y/N)= ";
    cin >> choice;

    if (choice == "Y")
    {
        
        addStudent("satish chandra", 23, 123455666, 13);
        addRoom(true, 50000, 13);
        setRoomPrice(13, 60000);
        generateStudentBill("satish chandra", 13, 50000); // here price is contact as per your hostel fee
    }
    else
    {
        cout << "Thanks for visiting .." << endl;
    }

    return 0;
}
