// we are using stack using array-->
#include <iostream>
#include<algorithm>
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

int findMax(){
    int maxElement =0;
    for(int i =0; i<=top; i++){
        maxElement = max(maxElement , collection[i]);
    }
    return maxElement;
}

int main()
{
    push(10);
    push(20);
    push(30);
    cout<<"in first step ->Maximum element is = "<<findMax()<<endl;

    pop();
    cout<<"in second step is -> Maximum element is = "<<findMax()<<endl;
    

    
    return 0;
}