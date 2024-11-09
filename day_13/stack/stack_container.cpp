// for searching (variable name , to be search)
// search(stack < int> &collection) -> original value
// search(stack < int> collection) -> copy  value but original is delete
// search(const stack < int> &collection) -> copy  value but original is not delete
//for iterator -> pop and print one by one when we not using array
// stack<int> temp = collection  // temp new variale in STL stack and 
// top().empty -> top is  empty
//                     then print stack is empty
//else show top and pop
#include <iostream>
#include <stack>
using namespace std;

void clear(stack<int>& collection)
{
    while (!collection.empty())
    {
        collection.pop();
    }
}

int search(stack<int> collection, int value)
{
    int position = 0;

    while (!collection.empty())
    {
        if (collection.top() == value)
        {
            return position;
        }
        collection.pop();
        position++;
    }
    return -1;
}

void display(const stack<int> &collection)
{
    if (collection.empty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    stack<int> temp = collection;
    cout << "Stack elements: ";
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> collection;
    
    collection.push(10);
    collection.push(20);
    collection.push(30);
    
    display(collection);
    cout << "Top element: " << collection.top() << endl;

    collection.pop();
    display(collection);
    
    cout << "Stack size: " << collection.size() << endl;
    cout << "Is stack empty? " << (collection.empty() ? "Yes" : "No") << endl;
    
    cout << "Searching for 20: " << (search(collection, 20) != -1 ? "Found" : "Not Found") << endl;
    
    clear(collection);
    display(collection);
    
    return 0;
}