#include <iostream>
#include <algorithm>
using namespace std;
int secondLargestElem(int *arr, int n)
{
    // int max = 0;
    int start =0;
    int end = n-1;


    for (int start = 0; start < n; start++)
    {
        sort(arr, arr + n);
    }

    for(int start =0; start<n; start++){
        cout<<"the second largest element is = "<<arr[end-1]<<" ";
        return 0;
    }
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(int);
    secondLargestElem(arr, n);
    return 0;
}