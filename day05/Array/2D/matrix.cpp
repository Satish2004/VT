#include <iostream>
using namespace std;
int main()
{
    int row;
    int cols;
    cout<<"enter the row";
    cin>>row;
    cout<<"enter cols";
    cin>>cols;

    int arr[row][cols];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        { 
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        { 
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}