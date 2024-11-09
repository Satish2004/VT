#include <iostream>
#include <string>
#include <vector>
using namespace std;

// =============================== CLASS DEFINE SECTION ==============================

// Class for Student Management -->
class Student
{
private:
    string name;
    int rollNo;
    int contact;

public:
    // Constructor to initialize a student object
    Student(string name, int rollNo, int contact)
         {

            
            this->name = name;
            this->rollNo = rollNo;
            this->contact = contact;
         }

    // Getter functions
    string getName() const { return name; }
    int getRollNo() const { return rollNo; }
    int getContact() const { return contact; }
};

// Class for Room Allocation Management -->
class Room
{
private:
    bool isRoomAvail;
    double price;
    int roomNo;

public:
   
    Room(bool isRoomAvail, double price, int roomNo)
    {
        this->isRoomAvail = isRoomAvail;
        this->price = price;
        this->roomNo = roomNo;
    }

    int getRoomNo()  { return roomNo; }
    double getPrice()  { return price; }
    void setPrice(double newPrice) { price = newPrice; }
    bool isAvailable()  { return isRoomAvail; }
};

class HostelManagement
{
private:
    vector<Student> students;
    vector<Room> rooms;

public:
    // Function to add a student
    void addStudent(string name, int rollNo, int contact)
    {
        Student student(name, rollNo, contact);
        students.push_back(student);
    }

    // Function to add a room
    void addRoom(bool isRoomAvail, double price, int roomNo)
    {
        Room room(isRoomAvail, price, roomNo);
        rooms.push_back(room);
    }

    // Function to set room price
    void setRoomPrice(int roomNo, double price)
    {
        cout << "------------------HOSTEL MANAGEMENT-----------------------" << endl;
        double basePrice = 50000;

        for (auto &room : rooms)
        {
            if (room.getRoomNo() == roomNo)
            {
                if (price == basePrice)
                {
                    room.setPrice(price);
                    cout << "You paid the full amount  " << price << " and you can live here." << endl;
                }
                else if (price > basePrice)
                {
                    double remaining = price - basePrice;
                    cout << "Your hostel fee is Rs 50,000. You paid Rs " << price << ". Remaining fee Rs " << remaining << " included in your tuition fee." << endl;
                }
                else
                {
                    cout << "Hostel price is Rs 50,000. Please pay the required amount." << endl;
                }
                return;
            }
        }
        cout << "Sorry, room is not available.\n";
    }

    // Function to generate a student bill
    void generateStudentBill(string studentName, int roomNo, double price)
    {
        for (const auto &student : students)
        {
            if (student.getName() == studentName)
            {
                cout << "===============Student Bill============>\n";
                cout << "Student Name: " << student.getName() << endl;
                cout << "Student Roll No: " << student.getRollNo() << endl;
                cout << "Student Contact No: " << student.getContact() << endl;
                cout << "Student Room No: " << roomNo << endl;
                cout << "Student Hostel Fee: Rs " << price << endl;
                return;
            }
        }
        cout << "Sorry! Student " << studentName << " is not found.\n";
    }
};

// =============================== MAIN FUNCTION ==============================

int main()
{
    HostelManagement hostel;
    int choice;

    do
    {
        cout << "================= WHAT DO YOU WANT  =================\n";
        cout << "1. Add Student\n";
        cout << "2. Add Room\n";
        cout << "3. Set Room Price\n";
        cout << "4. Generate Student Bill\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            int rollNo, contact;
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter contact number: ";
            cin >> contact;
            hostel.addStudent(name, rollNo, contact);
            cout << "Student added successfully!\n";
            break;
        }
        case 2:
        {
            int roomNo;
            double price;
            bool isRoomAvail;
            cout << "Enter room number: ";
            cin >> roomNo;
            cout << "Enter room price: ";
            cin >> price;
            cout << "Is room available (1 for Yes, 0 for No): ";
            cin >> isRoomAvail;
            hostel.addRoom(isRoomAvail, price, roomNo);
            cout << "Room added successfully!\n";
            break;
        }
        case 3:
        {
            int roomNo;
            double price;
            cout << "Enter room number to set price: ";
            cin >> roomNo;
            cout << "Enter the price: ";
            cin >> price;
            hostel.setRoomPrice(roomNo, price);
            break;
        }
        case 4:
        {
            string studentName;
            int roomNo;
            double price;
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, studentName);
            cout << "Enter room number: ";
            cin >> roomNo;
            cout << "Enter the hostel fee: ";
            cin >> price;
            hostel.generateStudentBill(studentName, roomNo, price);
            break;
        }
        case 5:
            cout << "Thank you for using this management system\n";
            break;
        default:
            cout << "sorry you choose wrong choice";
        }
    } while (choice != 5);

    return 0;
}
