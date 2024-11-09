#include <iostream>
#include <stack>

using namespace std;

stack<int> mainStack;
stack<int> maxStack;

void push(int x)
{
    mainStack.push(x);
    if (maxStack.empty() || x >= maxStack.top())
    {
        maxStack.push(x);
    }
}

int pop()
{
    if (mainStack.empty())
    {
        cout << "Stack is empty" << endl;
        return -1; // Indicate an error
    }

    int top = mainStack.top();
    mainStack.pop();
    if (top == maxStack.top())
    {
        maxStack.pop();
    }

    return top;
}

int getMax()
{
    if (maxStack.empty())
    {
        cout << "Stack is empty" << endl;
        return -1; // Indicate an error
    }

    return maxStack.top();
}

int main()
{
    push(2);
    push(3);
    push(1);

    cout << "Top: " << (mainStack.empty() ? -1 : mainStack.top()) << endl;
    cout << "Max: " << getMax() << endl;

    cout << pop() << " popped from stack\n";

    cout << "Top: " << (mainStack.empty() ? -1 : mainStack.top()) << endl;
    cout << "Max: " << getMax() << endl;

    cout << pop() << " popped from stack\n";

    cout << "Top: " << (mainStack.empty() ? -1 : mainStack.top()) << endl;
    cout << "Max: " << getMax() << endl;
    return 0;
}