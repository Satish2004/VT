#include <iostream>
using namespace std;

int duplicateArray(int *arr, int n)
{

    for (int start = 0; start < n - 1; start++)
    {
        for (int end = start + 1; end < n; end++)
        {

            if (arr[start] == arr[end])
            {
                return arr[start];
            }
        }
    }
    return -1; // no duplicate found means this section return ho jyega 
}

int main()
{
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(int);

    int duplicate = duplicateArray(arr, n);




    if (duplicate != -1) // agar duplicate nhi hoga to print hoga right wala
    
    {
        cout << "Duplicate element: " << duplicate << endl;
    }
    else
    { // else no print array
        cout << "No duplicate element found." << endl;
    }

    return 0;
}
