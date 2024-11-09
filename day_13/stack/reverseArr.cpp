#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// we can push on the stack
int  reverseQue(queue<int> myQue, stack<int> s1, stack<int> temp)
{


    if (myQue.empty())
    {
        cout << "The queue is now empty." << endl;
    }
    else
    { // in else -->
        for (int i = myQue.front(); i <= myQue.back(); i++)
        {
            int si = myQue.front();
        }
        
        
    }
}
// here we pop from the stack and store to the store;

int StackPop(queue<int> myQue, stack<int> s1, stack<int> temp)
{
    for (int i = 0; i < s1.size() - 1; i++)
    {
        int result = s1.top();
        temp.push(result);
    }
    

}

int main()
{

    stack<int> s1;
    queue<int> myQue;
    myQue.push(1);
    myQue.push(3);
    myQue.push(6);
    myQue.push(8);

    stack<int> temp;
    cout<<reverseQue(myQue, s1, temp);
    cout<<StackPop(myQue, s1, temp );

        return 0;
}