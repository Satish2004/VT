// we are using stack using array-->


#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int collection[MAX_SIZE];
int top = -1;

void push(int value)
{
    if (top >= MAX_SIZE - 1)
    {
        cout << "Stack overflow. Unable to push " << value << endl;
        return;
    }
    top++; // when push the element in the array the top++ initially array size is 0;
    collection[top] = value;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow. Unable to pop." << endl;
        return;
    }
    top--; // if element is there then top -- delete individual 

}

int peek()
{
    if (top == -1)
    {
        cout << "Stack is empty. No top element." << endl;
        return -1;
    }
    return collection[top];
}

bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top == MAX_SIZE - 1;
}

int size()
{
    return top + 1; // every time top+1 giving size of the stack
}

void clear()
{
    top = -1;
}

int search(int value)
{ // searching top -> bottom
    for (int i = top; i >= 0; i--)
    {
        if (collection[i] == value)
        {
            return top - i;
        }
    }
    return -1;
}

void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
    {
        cout << collection[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    
    display();

    cout << "Top element: " << peek() << endl;
    
    pop();
    display();
    
    cout << "Stack size: " << size() << endl;
    
    cout << "Is stack empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (isFull() ? "Yes" : "No") << endl;
    
    cout << "Searching for 20: " << (search(20) != -1 ? "Found" : "Not Found") << endl;
    
    clear();
    display();
    
    return 0;
}