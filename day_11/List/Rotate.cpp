#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};

    int elements = myList.back(); // access the last element
    myList.pop_back();            // pop last element
    myList.push_front(elements);  // push element to the front

    for (int elem : myList) // Use a loop to iterate through the list
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
