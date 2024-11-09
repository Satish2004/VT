#include <iostream>
#include <list>
#include <set>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    list<int> myList1 = {1, 3, 5, 7};
    list<int> myList2 = {1, 3, 6, 4, 5};
    set<int> intersectionSet;
    for (int element : myList1)
    {
        if (find(myList2.begin(), myList2.end(), element) != myList2.end())
        {
            intersectionSet.insert(element);
        }
    }

    for (int element : intersectionSet)
    {
        cout << element << " ";
    }
    cout << endl;
    // beginig ,end , what we need to find
    return 0;
}