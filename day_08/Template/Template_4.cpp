// print the numbers using template also for each loop

#include <iostream>
#include <vector>
using namespace std;
template <typename T>
T vectorSum(const vector<T> &vec)
{

    T sum = 0;
    for (const T &element : vec)
    {
        sum += element;
    }
    return sum;
}

int main()
{
    vector<int> elements = {1, 2, 3, 4, 5};
    cout << "sum is by const pass by reference = " << vectorSum(elements);
    return 0;
}
