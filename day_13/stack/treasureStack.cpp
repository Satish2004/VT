#include <iostream>
#include <stack>
#include <string>

using namespace std;

void clear(stack<string> &treasure)
{
    while (!treasure.empty())
    {
        treasure.pop();
    }
}

int search(stack<string> treasure, string value)
{
    int position = 0;

    while (!treasure.empty())
    {
        if (treasure.top() == value)
        {
            return position;
        }
        treasure.pop();
        position++;
    }
    return -1;
}

void display(const stack<string> &treasure)
{
    if (treasure.empty())
    {
        cout << " caves is empty." << endl;
        return;
    }

    stack<string> temp = treasure;
    cout << "  treasure : ";
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{ 
    stack<string> treasure;
    int options;
   do{


   
    cout << "1 do you want to see the top element" << endl;
    cout << "2 do you want to remove the top element" << endl;
    cout << "3 do you want to see the size of stack" << endl;
    cout << "4 do you want to see the stack is empty or not" << endl;
    cout << "5 do you want to clear the stack" << endl;
    cout << "6 do you want to display the all element of the stack" << endl;
    cin >> options;

   
        switch (options)
        {
        case 1:
            cout << "Top element is =";
            display(treasure);
            cout << "Top element: " << treasure.top() << endl;

            break;
        case 2:
            cout << "remove the top element=";
            treasure.pop();
            display(treasure);
            break;
        case 3:
            cout << "size of stack=";
            cout << "Stack size: " << treasure.size() << endl;
            break;
        case 4:
            cout << "stack is empty or not=";
            cout << "Is stack empty? " << (treasure.empty() ? "Yes" : "No") << endl;
            break;
        case 5:
            cout << "clear the stack";
            clear(treasure);
            display(treasure);
            break;
        case 6:
            cout << "searching the all element of the stack";
            cout << "Searching for Diamond " << (search(treasure, "Diamond") != -1 ? "Found" : "Not Found") << endl;
            cout << "Searching for gold-saw " << (search(treasure, "gold-saw") != -1 ? "Found" : "Not Found") << endl;
            cout << "Searching for golde-pot " << (search(treasure, "golden_pot") != -1 ? "Found" : "Not Found") << endl;
            break;

        default:
            break;
        }


    // stack<string> treasure;

    treasure.push("golden_pot");
    treasure.push("jwellery");
    treasure.push("Gold_coins");
    treasure.push("Diamond");
    treasure.push("gold-knief");
    treasure.push("gold-saw");
       }
   while(true);

    // display(treasure);
    // cout << "Top element: " << treasure.top() << endl;

    // treasure.pop();
    // display(treasure);

    // cout << "Stack size: " << treasure.size() << endl;
    // cout << "Is stack empty? " << (treasure.empty() ? "Yes" : "No") << endl;

    // cout << "Searching for Diamond " << (search(treasure, "Diamond") != -1 ? "Found" : "Not Found") << endl;
    // cout << "Searching for gold-saw " << (search(treasure, "gold-saw") != -1 ? "Found" : "Not Found") << endl;
    // cout << "Searching for golde-pot " << (search(treasure, "golden_pot") != -1 ? "Found" : "Not Found") << endl;

    // clear(treasure);
    // display(treasure);

    return 0;
}