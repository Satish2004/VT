#include <iostream>
using namespace std;
int main()
{
    // int arr[]= {1,2,3,4}; <- 1D array
    // int arr[n][m] ={{1,2,3,4}, {3,4,5,6}};
    // where n -> rows
    // where m -> column
    // nxm => rows x column;
    

    int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int n =2;
    int m =4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // cout<<endl;

    return 0;
}