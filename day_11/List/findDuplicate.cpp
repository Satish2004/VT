#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
int main()
{
   list<int>myList= {1,3,3,5,6,9};
    unordered_map<int, int> freq;
    for (int element : myList)
    {
        freq[element]++;
    }

    cout << "duplicate elements->";
    for (auto &entry : freq)
    {
        if (entry.second > 1)
        {
            cout << entry.first << " ";
        }
    }
    cout<<endl;
    return 0;
}