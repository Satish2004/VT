#include <iostream>
using namespace std;

int countPairArr(int *arr, int n, int sum)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            { 
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(int);
    int sum = 6; 

    int result = countPairArr(arr, n, sum);

    cout << "pair sum of =  " << sum << " is: " << result << endl;

    return 0;
}
